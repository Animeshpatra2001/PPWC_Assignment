#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
void P1()
{
    fprintf(stderr, "Coronavirus ");
}
void P2()
{
    fprintf(stderr, "WHO: ");
}
void P3()
{
    fprintf(stderr, "COVID-19 ");
}
void P4()
{
    fprintf(stderr, "disease ");
}
void P5()
{
    fprintf(stderr, "pandemic\n");
}
int main()
{
    pid_t pid1, pid2, pid3, pid4, pid5;
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
            pid3 = fork();
            if (pid3 == 0)
            {
                P3();
                exit(0);
            }
            else
            {
                pid4 = fork();
                if (pid4 == 0)
                {
                    P4();
                    exit(0);
                }
                else
                {
                    pid5 = fork();
                    if (pid5 == 0)
                    {
                        P5();
                        exit(0);
                    }
                }
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        wait(NULL);
    }
    return 0;
}