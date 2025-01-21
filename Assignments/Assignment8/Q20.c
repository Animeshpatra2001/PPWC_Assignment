#include <stdio.h>
#include <unistd.h>

int main() {
	int i;
	for (i = 0; i < 12; i++) {
		if (i % 3 == 0) {
			fork();
		}
	}
	return 0;
}

/*
	Total number of processes the above code snippet will generate: 16
*/