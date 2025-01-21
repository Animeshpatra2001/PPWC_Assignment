#include <stdio.h>

int sum_of_array(int *, int);
int sum_of_array(int *array, int i) {   // We can use sum variable inside the function as well.
    static int sum = 0;
    if (i < 0) {
        return sum;
    }
    return array[i] + sum_of_array(array, i - 1);
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int sum_of_elements = sum_of_array(array, size - 1);
    printf("The sum of the elements of the array is %d.", sum_of_elements);

    return 0;
}