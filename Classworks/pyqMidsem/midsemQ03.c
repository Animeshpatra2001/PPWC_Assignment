#include<stdio.h>
int main(){
	int eggs;
	int gross, dozen, leftOver;
	
	printf("Enter the number of eggs:");
	scanf("%d",&eggs);
	
	gross = eggs/144;
	eggs = eggs%144;
	
	dozen = eggs/12;
	leftOver = eggs%12;
	
	printf("You have %d gross , %d dozen and %d leftover eggs\n", gross, dozen, leftOver);
	return 0;
}
	
	
	
