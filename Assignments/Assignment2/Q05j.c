#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 0)
    {
        printf("%d %d", sizeof(2.3f), sizeof(2.3));
    }
    return (0);
}

/* 
The code won't give any output as inside the if condition a is assigned as 0 not getting compared. So 0 inside if 
condition is always treated as false.
*/