#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define FIFO_NAME "myfifo"

int main() {
    char read_msg[100];

    // Open FIFO for reading
    int fd = open(FIFO_NAME, O_RDONLY);
    if (fd == -1) {
        perror("Open failed");
        exit(EXIT_FAILURE);
    }

    // Read data from FIFO
    read(fd, read_msg, sizeof(read_msg));
    printf("Process 2 received: %s\n", read_msg);

    close(fd);

    // Remove the FIFO file
    unlink(FIFO_NAME);

    return 0;
}