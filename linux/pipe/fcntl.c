//using fcntl it is possible to unblock a specific end of the pipe
#include<stdio.h>
#include<fcntl.h>
int main()
{
	char ch='a';
	int fd[2],count=0;
	//pipe2(fd,O_NONBLOCK);		read end write end both are unblock
	pipe(fd);
	fcntl(fd[1],F_SETFL,O_NONBLOCK);	//only write end of the pipe is 
	while(write(fd[1],&ch,1)>0)
		count++;
	printf("sizeof the pipe: %d\n",count);
}
