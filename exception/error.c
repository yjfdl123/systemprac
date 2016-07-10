#include <stdio.h>
#include <errno.h>
int main(){
	fprintf(stderr,"error:%s\n",strerror(errno));
}
