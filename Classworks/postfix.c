
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define maxsize 100

int stack[maxsize];
int top = -1;

//function declaration
void push(int data);
int pop();
int postfix(char *exp);

int main()
{
    printf("Enter postfix expression \n");
    char exp[maxsize] = "234*6*+";

    int result = postfix(exp);
    printf("Result of postfix evaluation %d\n", result);
    return 0;
}

//push function
void push(int data)
{
    if(top == maxsize-1)
    {
        printf("stack overflow\n");
        //stackResize(maxsize * 2);
    }
    top = top + 1;
    stack[top] = data;
}

//pop function
int pop()
{
    if(top == -1)
    {
        printf("stack underflow\n");
        return -1;
    }
    return stack[top--];
}

//evaluate postfix
int postfix(char *exp)
{
    int i = 0, operand1, operand2, result;
    char ch;

    while((ch = exp[i++]) != '\0')
    {
        //if digit, push into stack
        if(isdigit(ch))
        {
            push(ch - '0');
        }

        //if operator, pop first 2 operand
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            operand2 = pop();
            operand1 = pop();

            switch(ch)
            {
                case '+':
                result = operand1 + operand2;
                break;

                case '-':
                result = operand1 - operand2;
                break;

                case '*':
                result = operand1 * operand2;
                break;

                case '/':
                result = operand1 / operand2;

                default:
                printf("invalid operator\n");
                exit(1);
            }

            //push result into stack
            push(result);
        }
        else if(ch == ' ')
        {
            continue;
        }
        else{
            printf("invalid character\n");
            exit(1);
        }
    }

    //final result is left in stack
    return pop();
}
