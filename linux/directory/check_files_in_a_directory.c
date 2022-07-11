//wap to find the file in a directory
#include<stdio.h>
#include<dirent.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int ret;
	struct dirent *p;
	DIR *dp;
	if(argc!=3)
	{
		printf("./a.out file name\n");
		return 0;
	}
	while(p=readdir(dp))
	{
		ret=strcmp(p->d_name,argv[2]);
		printf("%d",ret);
		if(ret==0)
		{
			printf("file found..\n");
			return 0;
		}
	}
	printf("file not found\n");
}
