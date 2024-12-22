#include <stdio.h>

int main() {
    int b = 65;
    void *p = &b; // (void *) is a generic type pointer, hence it can be assigned with any pointer.
    int *j = (int *)p;
    char *ch = (char *)p;
    printf("%d %c\n", *j, *ch);
    return 0;
}

/*
    O/P
    (b) 65 A
*/