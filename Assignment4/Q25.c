#include <stdio.h>

int findLargest(int *arr, int size) {
    int largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    return largest;
}

int main() {

    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, size);
    printf("\nThe largest value in the array is: %d\n", largest);
    
    return 0;
}

/*
Output
Enter the number of elements in the array: 5
Enter 5 elements:
Element[1]: 9
Element[2]: 3
Element[3]: 6
Element[4]: 2
Element[5]: 5

The largest value in the array is: 9
*/