#include <stdio.h>

int main() {
    char ch ='A';
    printf("%d\n", sizeof(ch));
    printf("%d", sizeof('A'));
    return (0);
}

/*
The output will be 1 and 4. because ch has only one character 'A' and when size of a character literal is counted,
it is treated as of int type and size of int is 4.
*/