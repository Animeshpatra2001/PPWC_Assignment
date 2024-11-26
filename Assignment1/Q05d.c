#include <stdio.h>
int main() {
    int sum;
    sum = 2 + 4 / 2 + 6 * 2;
    printf("%d", sum);
    return 0;
}

/* 
Output will be 16. Because / and * has higher presidence than +,
so these will be calculated first with left to right associativity.
 */