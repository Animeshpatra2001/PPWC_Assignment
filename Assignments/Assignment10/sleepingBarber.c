#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#define CHAIRS 5
sem_t waitingChairs;
sem_t barberChair;
sem_t barberSleep;
sem_t customerReady;
void *barber(void *arg)
{
    while (1)
    {
        sem_wait(&customerReady);
        sem_wait(&waitingChairs);

        sem_post(&barberSleep);

        sem_wait(&barberChair);
        printf("Barber is cutting hair\n");
        sleep(rand() % 3 + 1);

        sem_post(&barberChair);
    }
}
void *customer(void *arg)
{
    if (sem_trywait(&waitingChairs) == 0)
    {
        printf("Customer is waiting\n");
        sem_post(&customerReady);
        sem_wait(&barberSleep);

        sem_post(&waitingChairs);
        sem_wait(&barberChair);
        printf("Customer is getting a haircut\n");

        sem_post(&barberChair);
    }
    else
    {
        printf("No waiting chairs available. Customer is leaving.\n");
    }
}
int main()
{
    pthread_t barberThread, customerThreads[10];
    sem_init(&waitingChairs, 0, CHAIRS);
    sem_init(&barberChair, 0, 1);
    sem_init(&barberSleep, 0, 0);
    sem_init(&customerReady, 0, 0);
    pthread_create(&barberThread, NULL, barber, NULL);
    for (int i = 0; i < 10; i++)
    {
        sleep(rand() % 5);
        pthread_create(&customerThreads[i], NULL, customer, NULL);
    }
    for (int i = 0; i < 10; i++)
    {
        pthread_join(customerThreads[i], NULL);
    }
    pthread_join(barberThread, NULL);
    sem_destroy(&waitingChairs);
    sem_destroy(&barberChair);
    sem_destroy(&barberSleep);
    sem_destroy(&customerReady);
    return 0;
}