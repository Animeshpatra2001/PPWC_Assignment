#include <stdio.h>

void convert_to_uppercase(char *string, int size) {
    for (int i = 0; i < size; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        }
    }
}

int main() {
    char *argv[5];
    argv[4] = NULL;

    char str1[10], str2[10], str3[10], str4[10];

    printf("Enter string1: ");
    fgets(str1, 10, stdin);

    printf("Enter string2: ");
    fgets(str2, 10, stdin);

    printf("Enter string3: ");
    fgets(str3, 10, stdin);

    printf("Enter string4: ");
    fgets(str4, 10, stdin);

    argv[0] = str1;
    argv[1] = str2;
    argv[2] = str3;
    argv[3] = str4;
    argv[4] = NULL;

    for (int i = 0; i < 5; i++) {
        if (argv[i] != NULL) {
            convert_to_uppercase(argv[i], 10);
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%s \n", argv[i]);
    }
    return 0;
}

/*
Output
Enter string1: Animesh
Enter string2: Avilasha
Enter string3: Anamika
Enter string4: Sanjukta
ANIMESH
 
AVILASHA
 
ANAMIKA
 
SANJUKTA
*/