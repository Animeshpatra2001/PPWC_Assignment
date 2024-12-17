#include <stdio.h>
int main() {
    int arr[4][5], i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            arr[i][j] = 10 * i + j;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0)
                printf("%d  ", *((*(arr + i)) + j));
            else
                printf("%d ", *((*(arr + i)) + j));
        }
        printf("\n");
    }
    printf("\n");

    printf("%d\n", *(arr[1] + 9));
    return 0;
}

/*
    2D Array:
    0  1  2  3  4
    10 11 12 13 14
    20 21 22 23 24
    30 31 32 33 34

    O/P
    24
*/