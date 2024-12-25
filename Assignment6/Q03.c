#include <stdio.h>

int a, b, c = 0;
void prtFun(void);

int main() {
    auto int a = 1; /* Line 1 */
    prtFun();
    a += 1;
    prtFun();
    printf("\n %d %d ", a, b);
    return (0);
}
void prtFun(void) {
    register int a = 2; /* Line 2 */
    int b = 1;
    a += ++b;
    printf(" \n %d %d ", a, b);
}

/*
    4 2
    4 2
    2 0

    The prtFun() function has been called twice inside the main() function. And the 'a' and 'b' variables which we are printing inside the main function are the local static variable 'a' and the global variable 'b'. Inside the prtFun() there are two local variables 'a' and 'b' which will always be treated as 2 and 1 initially when the function is called. These are the different scopes.
*/