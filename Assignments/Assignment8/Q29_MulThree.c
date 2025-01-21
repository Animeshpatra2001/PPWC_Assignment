#include <stdio.h>

int main() {
    int num1, num2, num3, result;
    printf("Enter three numbers to multiply: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 * num2 * num3;

    printf("The result of multiplying %d, %d, and %d is: %d\n", num1, num2, num3, result);

    return 0;
}