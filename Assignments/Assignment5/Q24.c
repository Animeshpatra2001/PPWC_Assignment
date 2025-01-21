#include <stdio.h>
int main() {
    void demo();
    void (*fun)();
    fun = demo;
    // (*)fun();
    fun();
    return 0;
}
#include <stdio.h>
void demo() {
    printf("SS");
}

/*
    O/P
    line - 6 is throwing compilation time error because it's not permissible to call a function using (*) operator.

    If I remove that line from the code then it will print 'SS'
*/