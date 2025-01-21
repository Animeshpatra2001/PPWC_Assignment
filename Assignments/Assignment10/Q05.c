#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
sem_t semX, semY, semZ;
void *printX(void *arg)
{
    for (int i = 0; i < 5; i++)
    {
        sem_wait(&semX);
        printf("X");
        printf("X");
        sem_post(&semY);
    }
    return NULL;
}
void *printY(void *arg)
{
    for (int i = 0; i < 5; i++)
    {
        sem_wait(&semY);
        printf("Y");
        sem_post(&semZ);
        /
    }
    return NULL;
}
void *printZ(void *arg)
{
    for (int i = 0; i < 5; i++)
    {
        sem_wait(&semZ);
        printf("Z");
        printf("Z");
        sem_post(&semX);
    }
    return NULL;
}
int main()
{
    pthread_t tidX, tidY, tidZ;
    sem_init(&semX, 0, 1); // Start with X
    sem_init(&semY, 0, 0);
    sem_init(&semZ, 0, 0);
    pthread_create(&tidX, NULL, printX,
                   NULL);
    pthread_create(&tidY, NULL, printY,
                   NULL);
    pthread_create(&tidZ, NULL, printZ,
                   NULL);
    pthread_join(tidX, NULL);
    pthread_join(tidY, NULL);
    pthread_join(tidZ, NULL);
    sem_destroy(&semX);
    sem_destroy(&semY);
    sem_destroy(&semZ);
    printf("\n");
    return 0;
}