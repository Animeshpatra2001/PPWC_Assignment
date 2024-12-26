#include <stdio.h>
void f(int n) {
    if (n <= 1) {
        printf("%d", n);
    }
    else {
        f(n / 2);
        printf("%d", n % 2);
    }
}
int main() {
    f(173);
    return 0;
}

/*
    O/P
    10101101

    This function is basically performing the conversion from decimal to binary.
*/