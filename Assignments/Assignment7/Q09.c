#include <stdio.h>

struct s {
    int *p;
};
int main() {
    int a = 200;
    struct s s1;
    s1.p = &a;
    *(s1.p) = *(s1.p) + 100;
    printf("%d %d\n", a, *(s1.p));
    return 0;
}

/*
    O/P
    300 300

    Giving the address of a to structure s1 as member, then manipulating the value in that address will change value of both a and *(s1.p).
*/