#include<stdio.h>
#include<unistd.h>
int main(){
	int x;
	x = 0;
	pid_t p = fork();
	x = 1;
	printf("I am a process %ld and my  x is %d\n",(long)getpid(),x);
	printf("%d\n",p);A
	sleep(100);
	return 0;
}
