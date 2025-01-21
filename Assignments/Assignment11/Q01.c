#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#define SHM_SIZE 10
int main()
{
    int shmid = shmget(IPC_PRIVATE, SHM_SIZE, IPC_CREAT | 0666);
    if (shmid == -1)
    {
        perror("shmget");
        exit(1);
    }
    void *shmaddrs[4];
    for (int i = 0; i < 4; i++)
    {
        shmaddrs[i] = shmat(shmid, NULL, 0);
        if (shmaddrs[i] == (void *)-1)
        {
            perror("shmat");
            exit(1);
        }
    }
    struct shmid_ds shm_info;
    if (shmctl(shmid, IPC_STAT, &shm_info) == -1)
    {
        perror("shmctl");
        exit(1);
    }
    printf("Number of attachments: %ld\n", shm_info.shm_nattch);

    for (int i = 0; i < 4; i++)
    {
        if (shmdt(shmaddrs[i]) == -1)
        {
            perror("shmdt");
            exit(1);
        }
    }
    if (shmctl(shmid, IPC_RMID, NULL) == -1)
    {
        perror("shmctl");
        exit(1);
    }
    return 0;
}