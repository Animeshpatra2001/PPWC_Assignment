#include <stdio.h>
int main()
{
    int m, n;
    for (m = 9; m > 0; --m)
        for (n = 6; n > 1; --n)
            printf("#########\n");
    return 0;
}

/*
The output will be 45 lines of #########. Because the outer loop will iterate for 9 times(9 to 1) and for a single 
iteration of outer loop the inner loop will iterate for 5 times(6 to 2). 
Hence total number of printing will be 9 * 5 = 45.
*/