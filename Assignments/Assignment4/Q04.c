#include <stdio.h>

int main() {
    int x = 89;
    int *p1 = &x, *p2 = &x, *p3 = &x;

    printf("Value of x using pointer p1: %d\n", *p1);

    *p3 = 100;
    printf("\nAfter updating x using p3 -->\n");
    printf("Value of x using pointer p1: %d\n", *p1);
    printf("Value of x using pointer p2: %d\n", *p2);
    printf("Value of z using pointer p3: %d\n", *p3);

    return 0;
}

/*
Output
Value of x using pointer p1: 89

After updating x using p3 -->
Value of x using pointer p1: 100
Value of x using pointer p2: 100
Value of z using pointer p3: 100
*/