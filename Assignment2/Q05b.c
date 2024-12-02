#include <stdio.h>
int main()
{
    float x = 25.0, y = 10.0;
    if (y < 15.0)
        if (y >= 0.0)
            x = 5 * y;
        else
            x = 2 * y;
    else
        x = 3 * y;
    printf("%f", x);
    return 0;
}

/*
The code won't print anything as there is no print statement, but after successful execution variable x will be updated 
as 50.0000 as first if condition is true after going to nested if else again nested if condition is true.
*/