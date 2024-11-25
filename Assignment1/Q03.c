//3. Find the maximum value that can be stored in a float. Explain the reason behind it.

#include <stdio.h>
#include <float.h>

int main () {
    printf("Max value of float: %.2f\n", FLT_MAX);
    return 0;
}

// C language follows IEE 754 standard for floating point arithmetic which is a 32 bit representation.

/*
Output
Max value of float: 340282346638528859811704183484516925440.00
*/
