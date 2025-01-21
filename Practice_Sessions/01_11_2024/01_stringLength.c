// Program to find the length of a string using recursion

#include<stdio.h>
#include<string.h>

#define MAX 100      // Define a maximum length for the input string
#define NIL ('\0')   // Define NIL as the null character to check the end of the string

// Function to find the length of a string using recursion
int findlength(char *s)
{
    if (s[0] == NIL)  // Base case: if the first character is null, the string has ended
    {
        return 0;     // Return 0 as the length of the string from this point
    }
    return 1 + findlength(s + 1);  // Recursive call to get the length of the remaining string
}

int main()
{
    char b[MAX];  // Array to store the input string
    printf("Enter a string: \n");
    scanf("%[^\n]", b);  // Read the input string, including spaces, until newline is encountered
    int len = findlength(b);  // Call the function to find the length of the string
    printf("Length of the string: %d\n", len);  // Print the length of the string
}
