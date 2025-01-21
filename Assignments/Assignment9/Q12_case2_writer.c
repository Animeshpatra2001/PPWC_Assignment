#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define FIFO_NAME "myfifo"

int main() {
    char write_msg[] = "Hello from Process 1 to Process 2 via FIFO";

    // Create FIFO
    if (mkfifo(FIFO_NAME, 0666) == -1) {
        perror("mkfifo failed");
        exit(EXIT_FAILURE);
    }

    // Open FIFO for writing
    int fd = open(FIFO_NAME, O_WRONLY);
    if (fd == -1) {
        perror("Open failed");
        exit(EXIT_FAILURE);
    }

    // Write data to FIFO
    write(fd, write_msg, strlen(write_msg) + 1);
    printf("Process 1 sent: %s\n", write_msg);

    close(fd);
    return 0;
}