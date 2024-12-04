#include <stdio.h>
int main()
{
    int count = 11;
    while (--count + 1);
    printf("count down is %d \n", count);
    return 0;
}

/* 
The output will be 'count down in -1', as count is initialized as 11 and then the while loop continues to run until the
condition fails. The condition will only fail when the given condition express becomes zero. Hence after 12th iteration 
the expression will be zero and count variable by that time will be -1.
*/