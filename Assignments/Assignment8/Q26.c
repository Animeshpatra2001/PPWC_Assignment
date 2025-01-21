#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Function to create process hierarchy for Figure (a)
void create_figure_a() {
    pid_t pid1, pid2;

    printf("Parent process: PID = %d, PPID = %d\n", getpid(), getppid());

    // First child
    pid1 = fork();
    if (pid1 == 0) {
        printf("Child 1: PID = %d, PPID = %d\n", getpid(), getppid());

        // First child's child
        pid2 = fork();
        if (pid2 == 0) {
            printf("Child 1.1: PID = %d, PPID = %d\n", getpid(), getppid());
        } else {
            wait(NULL);
        }
        // Exit child 1
        _exit(0);
    } else {
        wait(NULL);

        // Second child
        pid2 = fork();
        if (pid2 == 0) {
            printf("Child 2: PID = %d, PPID = %d\n", getpid(), getppid());
        } else {
            wait(NULL);
        }
    }
}

// Function to create process hierarchy for Figure (b)
void create_figure_b() {
    pid_t pid1, pid2, pid3;

    printf("Parent process: PID = %d, PPID = %d\n", getpid(), getppid());

    // First child
    pid1 = fork();
    if (pid1 == 0) {
        printf("Child 1: PID = %d, PPID = %d\n", getpid(), getppid());
    } else {
        wait(NULL);

        // Second child
        pid2 = fork();
        if (pid2 == 0) {
            printf("Child 2: PID = %d, PPID = %d\n", getpid(), getppid());

            // Second child's child
            pid3 = fork();
            if (pid3 == 0) {
                printf("Child 2.1: PID = %d, PPID = %d\n", getpid(), getppid());
            } else {
                wait(NULL);
            }
            _exit(0);
        } else {
            wait(NULL);

            // Third child
            pid3 = fork();
            if (pid3 == 0) {
                printf("Child 3: PID = %d, PPID = %d\n", getpid(), getppid());
            } else {
                wait(NULL);
            }
        }
    }
}

int main() {
    printf("Creating process tree for Figure (a):\n");
    create_figure_a();
    printf("\n");

    printf("Creating process tree for Figure (b):\n");
    create_figure_b();
    printf("\n");

    return 0;
}