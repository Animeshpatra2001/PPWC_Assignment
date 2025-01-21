#include <stdio.h>
#include <unistd.h>

int main(void){
	fprintf(stderr,"PID=%ld\n",(long)getpid());
	while(1);
	return 0;
}

/*
	The state of the process will be: (A) R
*/