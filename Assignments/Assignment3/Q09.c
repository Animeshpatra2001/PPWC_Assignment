//9. Design a program to display the count of each character in a string. For example: input string: bintu, output: The count of each character in the string bintu is b-1, i-1, n-1, t-i, u-1.

#include <stdio.h>
#include <string.h>

void countEachCharacter(char *str, int size);
void countEachCharacter(char *str, int size) {
    int counter[256] = {0}; 

    for (int i = 0; i < size; i++) {
        counter[str[i]]++;
    }

    printf("The count of each character in the string \"%s\" is:\n", str);
    for (int i = 0; i < size - 1; i++) {
        if (str[i] != ' ' && str[i])
            printf("%c - %d, ", str[i], counter[str[i]]);
    }
}

int main() {
    char str[] = "Animesh Patra";
    int size = sizeof(str) / sizeof(str[0]);
    countEachCharacter(str, size);

    return 0;
}

/*
Output
The count of each character in the string "Animesh Patra" is:
A - 1, n - 1, i - 1, m - 1, e - 1, s - 1, h - 1, P - 1, a - 2, t - 1, r - 1, a - 2, 
*/
