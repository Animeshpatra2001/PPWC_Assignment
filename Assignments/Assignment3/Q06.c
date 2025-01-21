//6. Design a program to find the difference between two sets or arrays. The difference between two sets or arrays: All the elements of the first array that don’t appear in the second array. If array p has the elements { 1, 2, 3, 4} and array q has the elements {2, 4, 5, 6 }, then the difference between the two arrays, p-q will be {1, 3 }.

#include <stdio.h>

int differenceOfSets(int arr1[], int arr2[], int size1, int size2, int diff[]);
int differenceOfSets(int arr[], int arr2[], int size1, int size2, int diff[]) {
    int index = 0; 
    for (int i = 0; i < size1; i++) {
        int found = 0;
        for (int j = 0; j < size2; j++) {
            if (arr[i] == arr2[j]) {
                found++;
            }
        }
        if (found == 0) {
            diff[index++] = arr[i];
        }
    }
    return index;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int maxSize = size1 > size2 ? size1 : size2;
    int diff[maxSize];

    int size3 = differenceOfSets(arr1, arr2, size1, size2, diff);
    printf("arr1 - arr2 = { ");
    for(int i = 0; i < size3 ; i++) {
        printf("%d ", diff[i]);
    }
    printf("}");

    return 0;
}

/*
Output
arr1 - arr2 = { 1 3 }
*/