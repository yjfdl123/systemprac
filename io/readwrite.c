//#include "apue.h"

int main(){
	int n=1;
	int BUFFERSIZE = 10;
	char  input[BUFFERSIZE]   ;
	while(n>0){
		n = read(0,input,BUFFERSIZE);
		if (n>0){
			write(1,input,n);
		}
		if (n<0){
			//err_sys('read error');
		}
	}
	return 0;
}
