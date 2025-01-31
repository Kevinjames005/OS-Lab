#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main(){
	pid_t childprocess = fork();
	
	if (childprocess==0){
		printf("Current running process : Child process.\n");
		printf("Process id:%d\n",getpid());
		printf("The parent id:%d\n",getppid());
	}
	else if (childprocess > 1){
		printf("Current running process : Parent process.\n");
		printf("Process id:%d\n",getpid());
		printf("The child id:%d\n",childprocess);
		wait(NULL);
		printf("The parent process is terminated.\n");
	}
	else {
		printf("The creation of child process is unsuccessfull.\n");
	}
	
	exit(0);
}

