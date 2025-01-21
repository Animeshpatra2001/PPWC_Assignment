#include<stdio.h>
#include<string.h>

int main(){
	char s1[20] = {'a','n','i','m','e','s','h','\0'};
	char s2[20] = {'k','a','n','h','a','\0'};
	char s3[20] = "Black hole";
	char s4[] = "Computer Science";
	char *cp = "super string";
	char s5[20];
	char s6[20];
	
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);
	printf("cp: %s\n", cp);
	printf("Enter a name of student 6: \n");
	scanf("%[^\n]s", s6);
	
	printf("s1[0] = %c, s2[1] = %c, s3[2] = %c, s4[3] = %c, cp[4] = %c\n", s1[0], s2[1], s3[2], s4[3], cp[4]);
	
}
	
	
