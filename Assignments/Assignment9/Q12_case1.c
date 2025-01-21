#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define FIFO_NAME "myfifo"

int main() {
    pid_t pid;
    char write_msg[] = "Hello from Parent to Child via FIFO";
    char read_msg[100];

    // Create FIFO
    if (mkfifo(FIFO_NAME, 0666) == -1) {
        perror("mkfifo failed");
        exit(EXIT_FAILURE);
    }

    pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {  // Child process
        // Open FIFO for reading
        int fd = open(FIFO_NAME, O_RDONLY);
        if (fd == -1) {
            perror("Child open failed");
            exit(EXIT_FAILURE);
        }

        // Read data from FIFO
        read(fd, read_msg, sizeof(read_msg));
        printf("Child received: %s\n", read_msg);

        close(fd);
    } else {  // Parent process
        // Open FIFO for writing
        int fd = open(FIFO_NAME, O_WRONLY);
        if (fd == -1) {
            perror("Parent open failed");
            exit(EXIT_FAILURE);
        }

        // Write data to FIFO
        write(fd, write_msg, strlen(write_msg) + 1);
        printf("Parent sent: %s\n", write_msg);

        close(fd);
        wait(NULL);  // Wait for child to finish
    }

    // Remove the FIFO file
    unlink(FIFO_NAME);

    return 0;
}