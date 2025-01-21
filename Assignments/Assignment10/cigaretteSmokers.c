#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
sem_t agent_sem;
sem_t tobacco_sem;
sem_t paper_sem;
sem_t matches_sem;
sem_t smoker_sem;
pthread_mutex_t table_mutex;
void *agent(void *arg)
{
    while (1)
    {
        sem_wait(&agent_sem);
        pthread_mutex_lock(&table_mutex);
        int choice = rand() % 3;
        if (choice == 0)
        {
            printf("Agent puts paper and matches on the table.\n");
            sem_post(&tobacco_sem);
        }
        else if (choice == 1)
        {
            printf("Agent puts tobacco and matches on the table.\n");
            sem_post(&paper_sem);
        }
        else if (choice == 2)
        {
            printf("Agent puts tobacco and paper on the table.\n");
            sem_post(&matches_sem);
        }
        pthread_mutex_unlock(&table_mutex);
        sem_post(&smoker_sem);
        sleep(1);
    }
    return NULL;
}
void *smoker(void *arg)
{
    char *item = (char *)arg;
    sem_t *my_sem;
    if (strcmp(item, "tobacco") == 0)
        my_sem = &tobacco_sem;
    else if (strcmp(item, "paper") == 0)
        my_sem = &paper_sem;
    else
        my_sem = &matches_sem;
    while (1)
    {
        sem_wait(my_sem);
        pthread_mutex_lock(&table_mutex);
        printf("Smoker with %s makes a cigarette.\n", item);
        pthread_mutex_unlock(&table_mutex);
        sem_post(&agent_sem);
        sleep(1);
    }
    return NULL;
}
int main()
{
    srand(time(0));
    pthread_t agent_thread;
    pthread_t smokers[3];
    sem_init(&agent_sem, 0, 1);
    sem_init(&tobacco_sem, 0, 0);
    sem_init(&paper_sem, 0, 0);
    sem_init(&matches_sem, 0, 0);
    sem_init(&smoker_sem, 0, 0);
    pthread_mutex_init(&table_mutex, NULL);
    pthread_create(&agent_thread, NULL, agent, NULL);
    pthread_create(&smokers[0], NULL, smoker, "paper");
    pthread_create(&smokers[1], NULL, smoker, "tobacco");
    pthread_create(&smokers[2], NULL, smoker, "matches");
    pthread_join(agent_thread, NULL);
    for (int i = 0; i < 3; i++)
    {
        pthread_join(smokers[i], NULL);
    }
    sem_destroy(&agent_sem);
    sem_destroy(&tobacco_sem);
    sem_destroy(&paper_sem);
    sem_destroy(&matches_sem);
    sem_destroy(&smoker_sem);
    pthread_mutex_destroy(&table_mutex);
    return 0;
}