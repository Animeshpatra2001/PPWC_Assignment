//Write a c program to replace 0 and 1 in a num
#include <stdio.h>
#include <string.h>

int main(){
    char num[30];

    //input
    printf("Enter a num: ");
    scanf("%s", &num);
    
    //replace 0 and 1
    int i = 0;
    while (num[i] != '\0') {
        if (num[i] == '0') {
            num[i] = '1';
        } else if (num[i] == '1') {
            num[i] = '0';
        }
        i++;
    }

    //print
    printf("Modified num is: %s\n", num);
    return 0;

}
