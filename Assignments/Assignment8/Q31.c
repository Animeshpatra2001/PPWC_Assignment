#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid;
    pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        exit(1);
    }

    if (pid == 0) {
        printf("Child Process: Executing grep using exec family\n");

        char *args_v[] = {"/bin/grep", "-n", "pattern", "filename", NULL};
        execv("/bin/grep", args_v);

        char *args_l[] = {"grep", "-n", "pattern", "filename", NULL};
        execlp("grep", "grep", "-n", "pattern", "filename", (char *)NULL);

        execvp("grep", args_l);
        execle("/bin/grep", "grep", "-n", "pattern", "filename", (char *)NULL, NULL);

        char *env[] = {NULL};
        execve("/bin/grep", args_v, env);

        perror("exec failed");
        exit(1);
    } else {
        int status;
        printf("Parent Process: Waiting for child process to finish...\n");

        waitpid(pid, &status, 0);

        if (WIFEXITED(status)) {
            printf("Child Process %d terminated normally with exit status %d\n", pid, WEXITSTATUS(status));
        } else {
            printf("Child Process %d did not terminate normally\n", pid);
        }
        printf("Parent Process ID: %d\n", getpid());
    }

    return 0;
}