#include <stdio.h>
#include <unistd.h>

int main() {
	fork();
	fork() + fork();
	fork();
	printf("doing!\n");
	return 0;
}

/*
	O/P
	16 times 'doing' in new lines.
*/