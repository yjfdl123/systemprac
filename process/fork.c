#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	int x=1;
	int i=0;
	int p_num=5;
	for (i=0;i<p_num;i++){
		int c_pid = fork();
		if (c_pid==0){
			printf("i=%d in child:x=%d pid=%d\n",i,--x,getpid());
			//exit(0);
		}else{
			printf("i=%d generate:%d  ",i,c_pid);
		}
		//printf("generate:%d  ",c_pid);
	}
	printf("in parent:x=%d   pid=%d\n",++x,getpid());
}
