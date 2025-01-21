#include <stdio.h>
int main() {
    char ch = 97;
    printf("%d\n", sizeof(ch + 4));
}

/*
Output will be 4 because sizeof function is used for an arithmetic operation which comprises of one int and one char. 
Since the size of int is greater than char, the output of the operation will be 101 which is a int of size 4.
*/