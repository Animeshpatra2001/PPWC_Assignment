#include <stdio.h>
int main() {
    int n = printf("Hello\n");
    printf("%d ", n);
    return (0);
}

/*
Output is Hello and 6(in new line). It is because first of all we have written the print statement to print Hello with 
an escape sequence for the next line, then we have stored that print statement into a int variable n which basically 
returns the length of the characters inside print statement i.e 6 here.
*/