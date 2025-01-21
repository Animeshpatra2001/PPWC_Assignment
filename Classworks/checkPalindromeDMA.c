#include<stdio.h>
#include<string.h>
#include<stdlib.h>  

int checkPalindrome(char* str){
    int left = 0;
    int right = strlen(str) - 1;
    while(left < right){
        if(str[left] != str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main(){
    char* str = (char*)malloc(100 * sizeof(char)); 
    if(str == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Enter string: \n");
    scanf("%[^\n]s", str);

    if(checkPalindrome(str)){
        printf("The string is palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    free(str);  
    return 0;
}

