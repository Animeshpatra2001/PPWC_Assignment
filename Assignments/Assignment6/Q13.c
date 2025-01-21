#include <stdio.h>

void print_fibo(int);
void print_fibo(int n) {

    if (n == 0) return;

    static int first = 0, second = 1;
    printf("%d ", first);

    int next = first + second;
    first = second;
    second = next;
    print_fibo(n - 1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d fibonacci numbers are: ", n);
    print_fibo(n);

    return 0;
}