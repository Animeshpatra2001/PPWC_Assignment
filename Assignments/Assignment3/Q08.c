//8. Construct a program to find the occurrence of the first repetitive character in a string. For example, let the string racecar, the program should give the output as The first repititive character in the string racecar is c.

#include <stdio.h>

char findFirstRepetitive(char word[], int size);
char findFirstRepetitive(char word[], int size) {
    int i = 0, j = 0; 
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (word[i] == word[j]) {
                return word[i];
            }
        }
    }
    return '\0';
}

int main() {
    char word[] = "racecar";
    int size = sizeof(word) / sizeof(word[0]) - 1;

    char repetitive = findFirstRepetitive(word, size);
    if (repetitive != '\0') {
        printf("First repetitive character in %s is: %c", word, repetitive);
    } else {
        printf("No repetitive character in %s.", word);
    }

    return 0;
}

/*
Output
First repetitive character in racecar is: c
*/