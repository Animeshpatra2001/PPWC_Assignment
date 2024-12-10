#include <stdio.h>

int main() {
    int Ia = 345;
    float Fb = 4.5;
    char Chvar = 'Z';

    int *IaAdd = &Ia;
    float *FbAdd = &Fb;
    char *ChvarAdd = &Chvar;

    printf("Value\t\tAddress\n------------------------\n");
    printf("%d\t\t%p\n%d\t\t%p\n%d\t\t%p\n", Ia, (void*)IaAdd, Fb, (void*)FbAdd, Chvar, (void*)ChvarAdd);
    /* (void*) before every pointer is optional. This is only used to make the code more portable for all the browsers to
     avoid warnings while using pointers with %p.*/
    
    return 0;
}

/*
Output
Value		Address
------------------------
345		0x7ffdeaec5ad4
-353609008		0x5a
-353609009		(nil)
*/