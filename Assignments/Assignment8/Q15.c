#include <stdio.h>
#include <unistd.h>

int main(void) {
	if(fork() == 0)
		printf("1\n");
	else if(fork() == 0)
		printf("2\n");
	else if(fork() == 0)
		printf("3\n");
	else if(fork() == 0)
		printf("4\n");
	else
		printf("5\n");
	return 0;
}

/*
	O/P
	1
	2
	3
	4
	5
	
	Total number of processes: 5

	Yes, the code segment can generate fan of processes.
*/