#include <stdio.h>

int main() {
    int a[3][3] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    printf("%p %p %p\n", a[1] + 2, *(a + 1) + 2, &a[1][2]);
    printf("%d %d %d\n", *(a[1] + 2), *(*(a + 1) + 2), a[1][2]);
    return 0;
}

/*
    Considering the base address of the given array as 1000,

    O/P
    1020 1020 1020
    9 9 9
*/