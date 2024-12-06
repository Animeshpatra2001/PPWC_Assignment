/*
8. The natural logarithm can be approximated by the following series
 {(x-1)/x} + 1/2{(x-1)/x}^2 + 1/2{(x-1)/x}^3 + 1/2{(x-1)/x}^4 +...  
 Write a program that accepts x as an input through the keyboard and calculates the sum of first nine terms of this series.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Enter x: ");
    scanf("%f", &x);

    double series = (x - 1) / x;
    double commonTerm = series;

    for (int i = 2; i < 10; i++) {
        series += 0.5 * (pow(commonTerm, i));
    }
    printf("The sum of first 9 terms is %.2lf .", series);
    return 0;
}

/*
Output
Enter x: 9
The sum of first 9 terms is 3.06 .
*/