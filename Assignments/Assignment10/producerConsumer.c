#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#define BUFFER_SIZE 5
int buffer[BUFFER_SIZE];
int in = 0, out = 0;
sem_t empty;
sem_t full;
pthread_mutex_t mutex;
void *producer(void *arg)
{
    int item;
    while (1)
    {
        item = rand() % 100;
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        // Critical section
        buffer[in] = item;
 printf("Producer produced: %d
\n", item);
 in = (in + 1) % BUFFER_SIZE;
 pthread_mutex_unlock(&mutex);
 sem_post(&full);
 sleep(1);
    }
}
void *consumer(void *arg)
{
    int item;
    while (1)
    {
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        // Critical section
        item = buffer[out];
 printf("Consumer consumed: %d
\n", item);
 out = (out + 1) % BUFFER_SIZE;
 pthread_mutex_unlock(&mutex);
 sem_post(&empty);
 sleep(1);
    }
}
int main()
{
    pthread_t tid_producer, tid_consumer;
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    pthread_mutex_init(&mutex, NULL);
    pthread_create(&tid_producer, NULL, producer,
                   NULL);
    pthread_create(&tid_consumer, NULL, consumer,
                   NULL);
    pthread_join(tid_producer, NULL);
    pthread_join(tid_consumer, NULL);
    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);
    return 0;
}