#include <stdio.h>

int main() {
    struct student {
        int h;
        int w;
        int m;
    };
    struct student s1 = {20, 40, 50};
    struct student *ptr = &s1;
    printf("%d\n", *((int *)ptr + 2));
    return 0;
}

/*
    O/P
    50

    ptr is holding the address of structure s1. Adding 2 to it takes us to the third member(m). Dereferencing the variable gives us the value 50.
*/