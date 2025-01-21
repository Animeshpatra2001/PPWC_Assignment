#include<stdio.h>

int main(){
	int amount=0;
	int fifties,twenties,tens;
	
	printf("Enter the amount to withdraw (multiple of 10s): ");
	scanf("%d", &amount);
	
	if(amount%10 != 0){
		printf("Invalid amount . please enter multiple of 10.\n");
	return 1;
	}
	
	fifties = amount/50;
	amount %= 50;
	
	twenties = amount/20;
	amount %= 20;
	
	tens = amount/10;
	
	printf("The machine dispenses %d fifty dollar bills , %d twenty dollar bills , %d ten dollar bills.\n",fifties,twenties,tens);
	return 0;
}
	
