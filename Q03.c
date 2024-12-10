#include <stdio.h>

int main() {
    float x = 6.7, y = 1.2, z = 2.3;
    float *p;

    p = &x;
    printf("Value of x is: %.1f\n", *p);

    p = &y;
    printf("Value of y is: %.1f\n", *p);

    p = &z;
    printf("Value of z is: %.1f\n", *p);

    return 0;
}

/*
Output
Value of x is: 6.7
Value of y is: 1.2
Value of z is: 2.3
*/