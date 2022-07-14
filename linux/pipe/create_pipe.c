//wap to create a pipe
#include<stdio.h>
#include<string.h>
main()
{
	int fd[2];
	if(pipe(fd)<0)
	{
		perror("pipe");
		return 0;
	}
	if(fork()==0)
	{
		char a[20];
		read(fd[0],a,sizeof(a));
		printf("in child process: %s\n",a);
	}
	else
	{
		char b[20];
		printf("in parent process:\n");
		printf("enter string\n");
		scanf("%s",b);
		write(fd[1],b,strlen(b)+1);
	}
}
