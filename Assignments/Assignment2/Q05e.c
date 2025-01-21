#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1, j = 1; j <= n; i += 2, j++)
    {
        printf("%d%d\n", i, j);
    }
    return 0;
}

/*
The output will be 11, 32, 53, 74, 95. because i and j are intialized with 1 and the loop will continue running until j 
equals to n i.e 5. Also, i is incrementing by 2 where as j by 1. So, printing ij will give output as shown.
*/