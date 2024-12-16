#include <stdio.h>

void transpose(int *matrix, int *transposed, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(transposed + j * rows + i) = *(matrix + i * cols + j);
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {

    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transposed[cols][rows];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose((int *)matrix, (int *)transposed, rows, cols);

    printf("\nOriginal Matrix:\n");
    printMatrix((int *)matrix, rows, cols);

    printf("\nTransposed Matrix:\n");
    printMatrix((int *)transposed, cols, rows);

    return 0;
}

/*
Output
Enter number of rows: 3
Enter number of columns: 3
Enter the elements of the matrix:
Element[1][1]: 1
Element[1][2]: 2
Element[1][3]: 3
Element[2][1]: 4
Element[2][2]: 5
Element[2][3]: 6
Element[3][1]: 7
Element[3][2]: 8
Element[3][3]: 9

Original Matrix:
1 2 3 
4 5 6 
7 8 9 

Transposed Matrix:
1 4 7 
2 5 8 
3 6 9 
*/