#include <stdio.h>

int main() {
    void *p;
    int *i = 20;
    p = &i;
    void *q = p; // line-4
    // printf("%d %d %d\n", i, *p, *q); // line-5
}

/*
    O/P
    (iv) compile error at line-5

    Because (void *) needs type casting to be printed.
*/