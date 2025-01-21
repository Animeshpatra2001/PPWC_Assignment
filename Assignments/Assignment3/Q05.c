/*
5. The binary search algorithm that follows may be used to search an array when the elements are in order. The algorithm for binary search given as;
 1. Let bottom be the subscript of the initial array element.
 2. Let top be the subscript of the last array element.
 3. Let found be false.
 4. Repeat as long as bottom isn’t greater than top and the target has not been found
 5. Let middle be the subscript of the element halfway between bottom and top.
 6. if the element at middle is the target
 7. Set found to true and index to middle.else if the element at middle is larger than the target
 8. Let top be middle - 1. else
 9. Let bottom be middle + 1.
Write and test a function binary srch that implements this algorithm for an array of integers. When there is a large number of array elements, which function do you think is faster: binary srch or the linear search algorithm.
*/

#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arr[], int size, int target);
int binarySearch(int arr[], int size, int target) {
    int bottom = 0, top = size - 1; 
    bool found = false;
    int index = -1;

    while (bottom <= top) {
        int middle = bottom + (top - bottom) / 2;

        if (arr[middle] == target) {
            index = middle;
            return index;
        } else if (arr[middle] > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }
    return index;
}

int main() {
    int arr[] = {3, 5, 9, 15, 18, 20, 22, 27};
    int target = 18;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, size, target);
    if (index != -1) {
        printf("Target element found at index: %d.", index);
    } else {
        printf("Target element not found in the array.");
    }
    
    return 0;
}

/*
Output
Target element found at index: 4.
*/