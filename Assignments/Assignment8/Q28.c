#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number of terms>\n", argv[0]);
        exit(1);
    }

    int n = atoi(argv[1]);
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        exit(1);
    } 
    else if (pid == 0) {
        printf("Child process (PID: %d) generating Fibonacci sequence:\n", getpid());
        fibonacci(n);
    } 
    else {
        wait(NULL);
        printf("Parent process (PID: %d) finished\n", getpid());
    }

    return 0;
}