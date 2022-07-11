//wap to find the type of file using macros

#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>
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
	if(S_ISREG(v.st_mode))
		printf("Regular file\n");
	else if(S_ISDIR(v.st_mode))
		printf("Directroy file\n");
	else if(S_ISLNK(v.st_mode))
		printf("Link file\n");
	else
		printf("other type of files\n");
}
