// 检测命令行输入文件的类型 
//
//
#include <stdio.h>
#include <sys/stat.h>
int main(int argc,char* argv[]){
	printf("total para:%d\n",argc);
	struct stat buff;
	int i;
	for ( i=1;i<argc;i++){
		printf("%d:%s",i,argv[i]);
		if (lstat(argv[i],&buff)<0){
			printf("error\n");
		}
		printf("   mode: %d\n",buff.st_mode);
	}
	return 0;
}



