#include <stdio.h>

void fun() {
    int *q = (int *)malloc(sizeof(int));
    *q = 20;
}
int main() {
    int *p;
    int *r = NULL;
    fun();
    return 0;
}

/*

(i) p is a wild pointer --> True
(ii) r is a NULL pointer --> True
(iii) q is dangling pointer --> False
(iv) p is dangling pointer --> False
(v) fun() is making memory leak --> True

*/