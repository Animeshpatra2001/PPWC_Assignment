#include <stdio.h>
int octalToDecimal(int octal);
int main() {
    int octal;
    int decimal;

    printf("Enter a octal number: ");
    scanf("%d", &octal);

    decimal = octalToDecimal(octal);
    printf("The decimal equivalent is: %d\n", decimal);

}

int octalToDecimal(int octal) {
    int decimal = 0, base = 1;
    int temp = octal;

    while (temp > 0) {
        int lastDigit = temp % 10;  
        temp = temp / 10;           
        decimal += lastDigit * base; 
        base = base * 8;            
    }

    return decimal;
}
