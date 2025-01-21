#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
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
    int *data = (int *)shmat(shmid, NULL, 0);
    if (data == (int *)-1)
    {
        perror("shmat");
        exit(1);
    }
    *data = 500;
    printf("Initial value written to shared memory: %d\n", *data);
    shmdt(data);
    return 0;
}