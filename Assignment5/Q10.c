#include <stdio.h>

int main() {
    int *p = NULL;
    p = (int *)malloc(sizeof(int));
    *p = 10;
    free(p);
    int *q;
    q = (int *)malloc(sizeof(int));
    *q = 15;
    printf("%d %d\n", *p, *q);
    return 0;
}

/*
    O/P
    garbage_value 15

    Different types of pointer used:
    We have two pointers p and q and both are pointers to an integer.
*/