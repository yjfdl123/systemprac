#include <signal.h>
#include <stdio.h>

void handler_int(int  sx){
	printf("accept %d\n",sx);
	return;
}

int main(){
	printf("begin\n");
	signal(SIGINT,handler_int);

	printf("wait:\n");
	pause();
	printf("yes \n");
}
