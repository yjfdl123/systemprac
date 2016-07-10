#include <stdlib.h>
#include <stdio.h>

int main(){
	int num;
	printf("input num:");
	scanf("%d",&num);
	printf("num:%d\n",num);
	int i;
	int *myarray;
	myarray = (int *)malloc(num*sizeof(int));
	for (i=0;i<num;i++){
		scanf("%d",&myarray[i]);
	}
	for (i=0;i<num;i++){
		printf("%d\n",myarray[i]);
	}
}

