#include <stdio.h>
int main()
{
    int i = 0;
    while (i++)
    {
        printf("%d ", i);
        if (i > 2)
            break;
    }
    return (0);
}

/*
 The code won't show any output because while loop won't be invoked, because i++ will remain 0 in the condition box
 which is considered as false.
 */