#include <stdio.h>
int main()
{
    float x = 25.0, y = 10.0;
    if (y != (x - 10.0))
        x = x - 10.0;
    else
        x = x / 2.0;
    return 0;
}

/* 
The code won't show any output as there is no print statement, But after successful execution variable x will be 
updated as 15.0000 .
*/