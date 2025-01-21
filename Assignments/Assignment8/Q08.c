#include <stdio.h>
#include <unistd.h>

int main() {
	fork();
	fork() && fork() || fork();
	fork();
	printf("guess\n");
	return 0;
}

/*
	O/P
	20 times 'guess' in new lines.
*/