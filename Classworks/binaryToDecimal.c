//write a c program to convert binary number to decimal number.
#include <stdio.h>
int binaryToDecimal(int binary);
int main() {
    int binary;
    int decimal;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    decimal = binaryToDecimal(binary);
    printf("The decimal equivalent is: %d\n", decimal);

}

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    int temp = binary;

    while (temp > 0) {
        int lastDigit = temp % 10;  
        temp = temp / 10;           
        decimal += lastDigit * base; 
        base = base * 2;            
    }

    return decimal;
}


