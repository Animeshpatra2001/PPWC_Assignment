#include <stdio.h>
void sum(int a, int b, int *cp);
int main() {
    int x, y, z;
    x = 7;
    y = 2;
    printf("   x   y   z\n\n");
    sum(x, y, &z);
    printf("%4d%4d%4d\n", x, y, z);         // 7 2 9
    sum(y, x, &z);
    printf("%4d%4d%4d\n", x, y, z);         // 7 2 9
    sum(z, y, &x);
    printf("%4d%4d%4d\n", x, y, z);         // 11 2 9
    sum(z, z, &x);
    printf("%4d%4d%4d\n", x, y, z);         // 18 2 9
    sum(y, y, &y);
    printf("%4d%4d%4d\n", x, y, z);         // 18 4 9
    return (0);
}
void sum(int a, int b, int *cp) {
    *cp = a + b;
}