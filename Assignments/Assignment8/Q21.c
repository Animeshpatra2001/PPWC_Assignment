#include <stdio.h>
#include <unistd.h>

int main() {
	int x;
	int a[2] = {10, 20};
	x = 5 + a[fork() || fork()];
	printf("%d ",x);
	
	return 0;	
}

/*
	O/P
	25 25 15

	The possible values of x are 25 and 15.
*/