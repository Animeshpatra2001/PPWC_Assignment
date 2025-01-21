#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipefd[2];  // Array to hold pipe file descriptors
    pid_t pid;
    char write_msg[] = "Hello from Child Process via Pipe";
    char read_msg[100];

    // Create the pipe
    if (pipe(pipefd) == -1) {
        perror("Pipe failed");
        exit(EXIT_FAILURE);
    }

    // Create a child process
    pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {  // Child process
        close(pipefd[0]);  // Close the read end of the pipe
        write(pipefd[1], write_msg, strlen(write_msg) + 1);  // Write message to pipe
        printf("Child: Message sent to parent process.\n");
        close(pipefd[1]);  // Close the write end of the pipe
    } else {  // Parent process
        close(pipefd[1]);  // Close the write end of the pipe
        read(pipefd[0], read_msg, sizeof(read_msg));  // Read message from pipe
        printf("Parent: Received message: %s\n", read_msg);
        close(pipefd[0]);  // Close the read end of the pipe
    }

    return 0;
}