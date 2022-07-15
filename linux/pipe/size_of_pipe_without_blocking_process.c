//size of pipe without blocking the process
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd[2],count=0;
	char ch='a';
	pipe2(fd,O_NONBLOCK);
	//when pipe is full writing data into pipe process is not blocked
	//write system call will fail
	while(write(fd[1],&ch,1)>0)
		count++;
	printf("size of the pipe: %d\n",count);
}
