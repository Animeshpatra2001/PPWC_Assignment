#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <semaphore.h>
#include <pthread.h>
sem_t S, Q;
void *process1(void *arg)
{
    while (1)
    {
        sem_wait(&Q);
        sem_wait(&S);
        printf("Process 1 executing a\n");
        sem_post(&S);
        sem_post(&Q);
        sleep(1);
    }
}
void *process2(void *arg)
{
    while (1)
    {
        sem_wait(&S);
        sem_wait(&Q);
        printf("Process 2 executing b\n");
        sem_post(&Q);
        sem_post(&S);
        sleep(1);
    }
}
int main()
{
    pthread_t p1, p2;
    sem_init(&S, 0, 1);
    sem_init(&Q, 0, 1);
    pthread_create(&p1, NULL, process1, NULL);
    pthread_create(&p2, NULL, process2, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    sem_destroy(&S);
    sem_destroy(&Q);
    return 0;
}