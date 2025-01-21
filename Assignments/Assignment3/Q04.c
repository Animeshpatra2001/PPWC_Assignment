//4. You have two independent sorted arrays of size m, and n respectively, where m, n > 0. You are required to merge the two arrays such that the merged array will be in sorted form and will contain exactly m + n number of elements. You are not allowed to use any kind of sorting algorithm. Design your program to meet the above given requirement. 

//Note: Assume the elements of the array are non-negative integers. The elements can be read from the keyboard or can be generated randomly.

#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]);
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, index = 0; 

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[index++] = arr1[i++];
        } else {
            merged[index++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged[index++] = arr1[i++];
    }
    while (j < size2) {
        merged[index++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {10, 30, 50, 70, 90};
    int arr2[] = {20, 40, 60, 80};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1 + size2];
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}

/*
Output
Merged Array: 10 20 30 40 50 60 70 80 90
*/