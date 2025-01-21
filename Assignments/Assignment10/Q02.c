#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int shrd = 0;
void P1()
{
    int x;
    x = shrd;
    x = x + 1;
    sleep(1);
    shrd = x;
}
void P2()
{
    int y;
    y = shrd;
    y = y - 1;
    sleep(1);
    shrd = y;
}
int main()
{
    pid_t pid1, pid2;
    pid1 = fork();
    if (pid1 == 0)
    {
        P1();
        exit(0);
    }
    else
    {
        pid2 = fork();
        if (pid2 == 0)
        {
            P2();
            exit(0);
        }
        else
        {
            wait(NULL);
            wait(NULL);
            printf("Final value of shrd: %d\n", shrd);
        }
    }
    return 0;
}