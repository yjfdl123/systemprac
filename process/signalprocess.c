#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void handler_int(int  sx){
	printf("accept %d\n",sx);
	return;
}

void handler_childquit(int  sx){
	printf("accept %d\n",sx);
	int pid;
	while( (pid=waitpid(-1,NULL,0))>0){
		printf("process %d exit\n",pid);
	}
	return;
}

int main(){
	printf("begin\n");
	signal(SIGINT,handler_int);
	signal(SIGCHLD,handler_childquit);

	printf("wait:\n");

	int i;
	int pid;
	for (i=0;i<5;i++){
		pid=fork();
		if (pid ==0){
			printf("pid %d sleep %ds\n",getpid(),i);
			sleep(i);
			exit(0);
		}
		sleep(1);
	}
	pause();
	printf("yes \n");
}
