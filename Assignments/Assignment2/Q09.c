/*
Design a C program to display the following pattern based on the input given by the user.Enter the choice of the 
character : G
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/

#include <stdio.h>

int main() {
    char choice;

    printf("Enter the choice of the character: ");
    scanf(" %c", &choice);

    int rows = choice - 'A' + 1;

    for (int i = 0; i < rows; i++) {
        for (char ch = 'A'; ch <= choice - (i + 1); ch++) {
            printf("%c ", ch);
        }

        if (i == 0) {
            printf("%c ", choice);
        }

        if (i != 0)
            for (int j = 0; j < 2 * i + 1; j++) {
                printf("  ");
            }

        for (char ch = choice - (i + 1); ch >= 'A'; ch--) {
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}