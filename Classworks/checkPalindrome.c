#include<stdio.h>
#include<string.h>

int checkPalindrome(char str[]){
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
	char str[100];
	printf("Enter string: \n");
	scanf("%[^\n]s",str);
	if(checkPalindrome(str)){
		printf("The string is palindrome. \n");
	}else{
		printf("The string is not a palindrome. \n");
	}
	return 0;
}
