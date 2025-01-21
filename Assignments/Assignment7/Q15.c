#include <stdio.h>

int main() {
    union unit {
        int marks;
        int roll;
    } s1, s2;
    s2.roll = 23;
    s2.marks = 60;
    printf("Check memory alloc for union\n");
    printf("%d..%d\n", s2.marks, s2.roll);
    return 0;
}

/*
    O/P
    60..60

    union allocates only one memory space for all the members. Hence, the last updated value is in that address. No matter through which member we try to access the value it'll return the same value from that address.
*/