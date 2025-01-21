#include <stdio.h>
#include <unistd.h>

int main(){
	fork();
	fork() || fork();
	fork();
	printf("Really!!!\n");
	return 0;
}

/*
	O/P
	12 times 'Really!!!' in new lines.
*/