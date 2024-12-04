#include <stdio.h>
int main()
{
    int i = 2;
    switch (i)
    {
    default:
        printf("Hello ");
    case 1:
        printf("Hello ");
    case 2:
    case 3:
        printf("Hello ");
    }
    return (0);
}

/*
 The output will be Hello. The Hello is printed because of case 3. It's because i is 2, so case: 2 will satisfy then there
is no break statement. Hence it will run for case: 3 as well.
*/