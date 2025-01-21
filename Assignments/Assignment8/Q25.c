#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void create_process_tree() {
    pid_t pid1, pid2, pid3, pid4;

    printf("Parent Process: PID = %d\n", getpid());

    pid1 = fork(); // First child
    if (pid1 == 0) {
        printf("Child 1: PID = %d, Parent PID = %d, fork() return = %d\n", getpid(), getppid(), pid1);

        pid3 = fork(); // Child 1 creates Child 3
        if (pid3 == 0) {
            printf("Child 3: PID = %d, Parent PID = %d, fork() return = %d\n", getpid(), getppid(), pid3);
        } else if (pid3 > 0) {
            wait(NULL); // Wait for Child 3 to finish
        }

    } else if (pid1 > 0) {
        pid2 = fork(); // Parent creates Second child
        if (pid2 == 0) {
            printf("Child 2: PID = %d, Parent PID = %d, fork() return = %d\n", getpid(), getppid(), pid2);

            pid4 = fork(); // Child 2 creates Child 4
            if (pid4 == 0) {
                printf("Child 4: PID = %d, Parent PID = %d, fork() return = %d\n", getpid(), getppid(), pid4);
            } else if (pid4 > 0) {
                wait(NULL); // Wait for Child 4 to finish
            }

        } else if (pid2 > 0) {
            wait(NULL); // Wait for Child 1 to finish
            wait(NULL); // Wait for Child 2 to finish
        }
    }
}

int main() {
    create_process_tree();
    return 0;
}