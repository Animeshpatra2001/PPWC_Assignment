#include <stdio.h>

int main() {
    int a = 55, b = 105, c = 89, d = 68;
    int *arr[] = {&a, &b, &c, &d};

    int maxvar = a;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (**(arr + i) > maxvar) {
            maxvar = **(arr + i);
        }
    }
    printf("%d\n", maxvar);
    return 0;
}

/*
Output
105
*/