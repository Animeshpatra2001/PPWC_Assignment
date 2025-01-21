#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("hello\n");
    fork();
    printf("hello\n");
    fork();
    printf("hello\n");
    fork();
    printf("hello\n");
    return 0;
}

/*
    O/P
    15 times 'hello' in different lines.

    Total number of processes: 8
    Formula for number of outputs is = 2^0 + 2^1 + 2^2 + ...... + 2^n, where n is the number of fork() in the program.
*/