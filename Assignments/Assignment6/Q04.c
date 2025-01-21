#include <stdio.h>

int f(int n, int k) {
    if (n == 0)
        return 0;
    else if (n % 2)
        return f(n / 2, 2 * k) + k;
    else
        return f(n / 2, 2 * k) - k;
}

int main() {
    printf("%d", f(20, 1));
    return 0;
}

/*
    O/P
    9

    This is a recursive function call of f(). Where the function is checking whether the value of n is even or odd. If odd, then calling f(n/2, 2*k) + k otherwise f(n/2, 2*k) - k. When the base case satisfies, then it returns 0, during the popping of function calls from the stack, according to the value of n(whether even or odd) a k is added or divided to the returned result.
*/