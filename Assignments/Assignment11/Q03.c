#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#define SHM_SIZE sizeof(int)
int main()
{
    key_t key = ftok("shmfile", 65);
    int shmid = shmget(key, SHM_SIZE, 0666 | IPC_CREAT);
    if (shmid == -1)
    {
        perror("shmget");
        exit(1);
    }
    pid_t pid = fork();
    if (pid < 0)
    {
        perror("fork");
        exit(1);
    }
    else if (pid == 0)
    {
        int *shared_data = (int *)shmat(shmid, NULL, 0);
        if (shared_data == (int *)-1)
        {
            perror("shmat");
            exit(1);
        }
        *shared_data = 100;
        printf("Child: Sent %d to parent\n", *shared_data);
        sleep(1);
        printf("Child: Received %d from parent\n", *shared_data);
        shmdt(shared_data);
        exit(0);
    }
    else
    {
        wait(NULL);
        int *shared_data = (int *)shmat(shmid, NULL, 0);
        if (shared_data == (int *)-1)
        {
            perror("shmat");
            exit(1);
        }
        printf("Parent: Received %d from child\n", *shared_data);
        *shared_data *= 2;
        shmdt(shared_data);
        wait(NULL);
        shmctl(shmid, IPC_RMID, NULL);
    }
    return 0;
}