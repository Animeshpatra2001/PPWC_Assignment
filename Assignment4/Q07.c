#include <stdio.h>

int main() {
    int a = 52, b = 18;
    int *ptr1 = &a, *ptr2 = &b;

    if (*ptr1 > *ptr2) {
        printf("%d is greater than %d.\n", *ptr1, *ptr2);
    } else if(*ptr2 > *ptr1) {
        printf("%d is greater than %d.\n", *ptr2, *ptr1);
    } else {
        printf("Both are equal.");
    }

    return 0;
}

/*
Output
52 is greater than 18.
*/