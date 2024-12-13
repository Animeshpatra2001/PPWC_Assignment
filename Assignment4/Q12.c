#include <stdio.h>

int main() {
    int a[] = {120, 502, 118, 188, 106, 447};
    int *ptr = a;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}

/*
Output
120 502 118 188 106 447
*/