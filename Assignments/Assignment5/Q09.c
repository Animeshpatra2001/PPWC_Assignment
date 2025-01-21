#include <stdio.h>
int main(void) {
    int x = 1, z[2] = {10, 11};
    int *p = NULL;
    p = &x;
    *p = 10;
    p = &z[1];
    *(&z[0] + 1) += 3;
    printf("%d, %d, %d\n", x, z[0], z[1]);
    return 0;
}

/*
    O/P
    (D) 10, 10, 14

    Updation in x and z[1] using pointer p and direct dereferencing respectively.
*/