#include <stdio.h>

void arrange(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int arr[6] = {4, 3, 9, 1, 7, 2};

    arrange(&arr[0], &arr[1]);
    arrange(&arr[1], &arr[2]);
    arrange(&arr[2], &arr[3]);
    arrange(&arr[3], &arr[4]);
    arrange(&arr[4], &arr[5]);

    arrange(&arr[0], &arr[1]);
    arrange(&arr[1], &arr[2]);
    arrange(&arr[2], &arr[3]);
    arrange(&arr[3], &arr[4]);

    arrange(&arr[0], &arr[1]);
    arrange(&arr[1], &arr[2]);
    arrange(&arr[2], &arr[3]);

    arrange(&arr[0], &arr[1]);
    arrange(&arr[1], &arr[2]);

    arrange(&arr[0], &arr[1]);

    printf("Sorted array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
Output
Sorted array: 1 2 3 4 7 9
*/