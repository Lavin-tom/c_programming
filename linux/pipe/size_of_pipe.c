//size of pipe
#include<stdio.h>
int main()
{
	int fd[2],count=0;
	char ch='a';
	pipe(fd);

	while(write(fd[1],&ch,1)>0)
	{
		count++;
		printf("size of the pipe: %d\n",count);
	}
}
