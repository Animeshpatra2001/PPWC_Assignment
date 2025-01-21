#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	pid_t childpid;
	childpid = fork();
	if(childpid == -1){
		printf("Fork error\n");
		return 1;
	}else if(childpid == 0){
		printf("child : PID: %ld ---- PPID: %ld\n", (long)getpid(), (long)getppid());
		sleep(100);
		printf("child : PID: %ld ---- PPID: %ld\n", (long)getpid(), (long)getppid());
	}else{
		printf("parent: PID: %ld ---- PPID: %ld\n", (long)getpid(), (long)getppid());
		exit(0);
	}
}

