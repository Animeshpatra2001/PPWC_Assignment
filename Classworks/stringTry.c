#include<stdio.h>
int main(){
	char str[100];
	printf("Enter a String: \n");
	scanf("%s",str);
	
	printf("str:%u\n", str);
	printf("&str:%u\n", &str);
	printf("&str[0]:%u\n", &str[0]);
	printf("str+1:%u\n", str+1);
	printf("&str+1:%u\n", &str+1);
	printf("&str[0]+1:%u\n", &str[0]+1);
	return 0;
}
