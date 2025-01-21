//If x is 0 , add 1 to zero count. If x is negative, add x to minus sum. If x is greater than 0 , add x to plus sum.

#include <stdio.h>

int main(){
    float x;
    float zero_count = 0, minus_sum = 0, plus_sum = 0;

    //input
    printf("Enter a number x: ");
    scanf("%f", &x);

    if (x == 0) {
        zero_count += 1;
        }
    else if (x < 0) {
        minus_sum += x;
    }
    else {
        plus_sum += x;
    }

    //print
    printf("Zero count: %f\n", zero_count);
    printf("Minus sum: %f\n", minus_sum);
    printf("Plus sum: %f\n", plus_sum);
}
