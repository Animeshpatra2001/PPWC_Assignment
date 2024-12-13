#include <stdio.h>

int main() {
    int m = 25, n = 77;
    char c = '*';
    int *itemp;
    /* describe the errors in each of the following statements. */
    m = &n;
    itemp = m;
    *itemp = c;
    *itemp = &c;
    return 0;
}