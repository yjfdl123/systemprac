#include <stdio.h>


int main(int argc, char* argv[], char* env[]){
	int i;
	for (i=0;i<argc;i++){
		printf("i=%d para=%s\n",i,argv[i]);
	}
	for (i=0;env[i]!=NULL;i++){
		printf("i=%d env=%s\n",i,env[i]);
	}
}
