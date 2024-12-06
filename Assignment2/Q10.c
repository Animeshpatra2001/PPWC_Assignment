/*
Write a program to generate the multiplication table for a given number as follows
Enter the number > 8
+-----------------------------------------+
|  8  16  24  32  40  48  56  64  72  80  |
|  1   2   3   4   5   6   7   8   9  10  |
|  8   8   8   8   8   8   8   8   8   8  |
+-----------------------------------------+
*/

#include <stdio.h>

void generateTable(int number) {
    printf("+-------------------------------------------+\n|");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", number * i);
    }
    printf("   |\n|");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("   |\n|");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", number);
    }
    printf("   |\n+-------------------------------------------+");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    generateTable(number);
    return 0;
}