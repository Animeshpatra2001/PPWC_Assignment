#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)calloc(1, sizeof(int));
    *ptr = 100;
    printf("%d\n", *ptr);
    ptr = (int *)realloc(ptr, 0);
    ptr = NULL;
    printf("%p\n", ptr);

    return 0;
}

/*
    O/P
    100
    00000000
    Yes, line number 9 can be treated as like free() to deallocate memory.
*/