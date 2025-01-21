#include <stdio.h>

int main() {
    int a[] = {120, 502, 118, 188, 106, 447};
    int *ptr1 = &a[0], *ptr2 = &a[1], *ptr3 = &a[2], *ptr4 = &a[3], *ptr5 = &a[4], *ptr6 = &a[5];

    printf("INDEX\t\tVALUE");
    printf("\n0\t\t%d", *ptr1);
    printf("\n1\t\t%d", *ptr2);
    printf("\n2\t\t%d", *ptr3);
    printf("\n2\t\t%d", *ptr4);
    printf("\n2\t\t%d", *ptr5);
    printf("\n2\t\t%d", *ptr6);

    return 0;
}

/*
OUTPUT
INDEX		VALUE
0		120
1		502
2		118
2		188
2		106
2		447
*/