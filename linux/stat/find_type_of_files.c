//wap to find the type of file
#include<stdio.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("./a.out filename\n");
		return 0;
	}
	stat(argv[1],&v);
	printf("%o\n",v.st_mode);
}
