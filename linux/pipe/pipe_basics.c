//pipe
#include<stdio.h>
int main()
{
	int fd[2];
	if(pipe(fd)<0)
	{
		perror("pipe");
		return 0;
	}
	printf("fd[0]: %d fd[1]:%d\n",fd[0],fd[1]);
}
