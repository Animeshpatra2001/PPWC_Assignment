#include <stdio.h>
#include <stdlib.h>

int *fun();
int main(void) {
    int *ptr = fun();
    printf("%d\n", *ptr);

    return 0;
}

int *fun() {
    int a = 10, b = 20, *sum;
    sum = (int *)malloc(sizeof(int));
    *sum = a + b;
    return sum;
}

/*
    O/P
    (b) 30

    Because, here we are dynamically allocating memory to a sum variable and then assigning the sum of a and b to it. Hence, there is a direct interaction with memory insted of a local variable and as it is dynamically allocated memory, so the value is not lost until we free the memory explicitly.
*/