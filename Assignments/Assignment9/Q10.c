#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipefd[2];  // Array to hold pipe file descriptors
    char write_msg[] = "Hello from the same process using pipe";
    char read_msg[100];

    // Create the pipe
    if (pipe(pipefd) == -1) {
        perror("Pipe failed");
        exit(EXIT_FAILURE);
    }

    // Write message to the pipe
    write(pipefd[1], write_msg, strlen(write_msg) + 1);  // Write to pipe
    printf("Message written to pipe: %s\n", write_msg);

    // Read message from the pipe
    read(pipefd[0], read_msg, sizeof(read_msg));  // Read from pipe
    printf("Message read from pipe: %s\n", read_msg);

    // Close the pipe ends
    close(pipefd[0]);  // Close the read end
    close(pipefd[1]);  // Close the write end

    return 0;
}