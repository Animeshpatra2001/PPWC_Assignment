#include <stdio.h>

int main() {
    struct out {
        char ch[10];
        char *str;
    };
    struct b {
        char *c;
        struct out o;
    };
    struct b s2 = {"ODISHA", "KHURDA", "JOYDEV"};
    printf("%s %s %s\n", s2.c, s2.o.str, s2.o.ch);
    printf("%s %s\n", ++s2.c, ++s2.o.str);
    return 0;
}

/*
    O/P
    ODISHA JOYDEV KHURDA
    DISHA OYDEV

    Inside structure b there is an instance of structure out. Accessing structure members using . operator.
*/