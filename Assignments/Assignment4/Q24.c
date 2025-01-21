#include <stdio.h>
#include <string.h>

void reverse_string(char *str);
void reverse_string(char *str) {
    int length = strlen(str);
    int i = 0, j = length - 1;
    while (i < j) {
        char temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
        i++; j--;
    }
}

int main() {
    char str[] = "Animesh Patra";
    reverse_string(str);
    printf("%s", str);
    return 0;
}

/*
Output
artaP hseminA
*/