#include <stdio.h>

int *fun();
int main(void) {
    int *ptr;
    ptr = fun();
    printf("%d\n", *ptr);
    return 0;
}

int *fun() {
    int a = 10, b = 20;
    int sum = 0;
    sum = sum + a + b;
    return &sum;
}

/*
    O/P
    (a) Unexpected behavior

    Because once the function gets executed then, all its local variables get removed from call stack along with function call. Hence, at the time of printing there is no address to sum variable is available.
*/