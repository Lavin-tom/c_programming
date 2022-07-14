//wap to create parent and child process,
//parent process will send data to child process after,
//receiving data by child process, child will convert each letter
//int opposite case after,
//child will write data back to pipe then parent will read data and print on screen

#include<stdio.h>
#include<string.h>
int main()
{
	int fd[2];
	pipe(fd);
	if(fork()==0)
	{
		int i;
		char a[20];
		read(fd[0],a,sizeof(a));
		//to convert every character into oppo case
		for(i=0;a[i];i++)
			a[i]=a[i]^32;
		write(fd[1],a,strlen(a)+1);
	}
	else
	{
		char b[20];
		printf("enter string\n");
		scanf("%s",b);
		write(fd[1],b,strlen(b)+1);
		//to context switching
		sleep(2);
		read(fd[0],b,sizeof(b));
		printf("data:%s\n",b);
	}
}
