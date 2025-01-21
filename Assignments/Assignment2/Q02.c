/*
2. State the purpose of the break statement within a switch case. Can a switch case work without it ? Explain your choice
 with an example.
*/

/*
Ans. B    reak statement within a switch case is used to terminate the switch case statement once any of the cases got 
matched. But, yes a switch case can work without a break statement.
*/

#include <stdio.h>
int main()
{
    // example with break
    printf("For switch case with break: \n");
    int a = 1;
    switch (a)
    {
    case 0:
        printf("a is 0.\n");
        break;
    case 1:
        printf("a is 1.\n");
        break;
    case 2:
        printf("a is 2.\n");
        break;
    }

    // example without break
    printf("For switch case without break: \n");
    switch (a)
    {
    case 0:
        printf("a is 0.\n");
    case 1:
        printf("a is 1.\n");
    case 2:
        printf("a is 2.\n");
    }
    return 0;
}

/*
Output
For switch case with break: 
a is 1.
For switch case without break: 
a is 1.
a is 2.
*/