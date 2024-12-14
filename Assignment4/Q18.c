#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // For Figure-1: Integer Array arr
    int **arr1 = (int **)malloc(4 * sizeof(int *));
    for (int i = 0; i < 4; i++) {
        arr1[i] = (int *)malloc(sizeof(int));
        *arr1[i] = i + 1; // Assigning values
    }

    printf("Figure-1: arr1 values:\n");
    for (int i = 0; i < 4; i++) {
        printf("arr1[%d] = %d\n", i, *arr1[i]);
    }

    // For Figure-2: Arrays of arrays
    int **arr2 = (int **)malloc(4 * sizeof(int *));
    for (int i = 0; i < 4; i++) {
        arr2[i] = (int *)malloc(4 * sizeof(int));
        for (int j = 0; j < 4; j++) {
            arr2[i][j] = i + j; // Assigning element-wise sums
        }
    }

    printf("\nFigure-2: arr2 values:\n");
    for (int i = 0; i < 4; i++) {
        printf("arr2[%d]: ", i);
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // For Figure-3: Strings
    char *argv[5];
    argv[0] = (char *)malloc(5 * sizeof(char));
    argv[1] = (char *)malloc(3 * sizeof(char));
    argv[2] = (char *)malloc(3 * sizeof(char));
    argv[3] = (char *)malloc(5 * sizeof(char));
    argv[4] = NULL;

    strcpy(argv[0], "mine");
    strcpy(argv[1], "cs");
    strcpy(argv[2], "sc");
    strcpy(argv[3], "soa");

    printf("\nFigure-3: Strings in argv:\n");
    for (int i = 0; i < 4; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    // Free allocated memory
    for (int i = 0; i < 4; i++) {
        free(arr1[i]);
    }
    free(arr1);

    for (int i = 0; i < 4; i++) {
        free(arr2[i]);
    }
    free(arr2);

    for (int i = 0; i < 4; i++) {
        free(argv[i]);
    }

    return 0;
}

/*
Output
Figure-1: arr1 values:
arr1[0] = 1
arr1[1] = 2
arr1[2] = 3
arr1[3] = 4

Figure-2: arr2 values:
arr2[0]: 0 1 2 3 
arr2[1]: 1 2 3 4 
arr2[2]: 2 3 4 5 
arr2[3]: 3 4 5 6 

Figure-3: Strings in argv:
argv[0] = mine
argv[1] = cs
argv[2] = sc
argv[3] = soa
*/