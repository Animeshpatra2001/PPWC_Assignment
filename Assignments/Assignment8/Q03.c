#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    printf("A");

    pid_t pid = fork();

    if (pid == 0) {
        printf("P\n");
    } else {
        wait(NULL);
        printf("P\n");
    }

    return 0;
}