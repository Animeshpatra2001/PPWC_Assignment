#include <stdio.h>

int main() {
    static int i = 5;
    if (--i) {
        main();
        printf("%d ", i);
    }
    test();
    return 0;
}

/*
    O/P
    0 0 0 0

    This is a recursive program where the main() function is being repeatedly called until the value of static variable i becomes 0. Hence, the main() function will be called for i value 4, 3, 2, 1. When the i becomes 0, then the function call stack gets empty by popping all the inserted function calls one by one. And during each pop function prints the updated i value which is 0(because there is only a single instance of i variable as it is static).
*/