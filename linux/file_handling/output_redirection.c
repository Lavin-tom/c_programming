//output redirection
#include<stdio.h>
#include<fcntl.h>
int main()
{
	printf("hello\n");
	int fd;
	close(1);
	fd=open("temp",O_WRONLY|O_CREAT|O_TRUNC,0664);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	//below codes are not print in console
	//it write into files because of output redirection
	printf("fd: %d\n",fd);
	printf("testing\n");
}
