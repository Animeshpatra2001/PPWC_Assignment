#include <stdio.h>

int f(int n) {
    static int i = 1;
    if (n >= 5)
        return n;
    n = n + 1;
    i++;
    return f(n);
}

int main() {
    int result = f(1);
    printf("%d", result);
}

/*
    O/P
    5

    Execution pattern: (consider the below lines as a stack which is refering to function call stack)

    f(5)  -->  5
    f(4)  -->  5
    f(3)  -->  5
    f(2)  -->  5
    f(1)  -->  5
    Final return value will be 5.
*/