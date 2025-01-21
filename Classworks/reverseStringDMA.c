#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char* str){
    int left = 0;
    int right = strlen(str) - 1;
    char temp;
    while(left < right){
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main(){
    char* str = (char*)malloc(100 * sizeof(char));  
    if(str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  
    }

    printf("Enter string: \n");
    scanf("%[^\n]s", str);  

    reverseString(str);  
    puts(str);           

    free(str);  
    return 0;
}

