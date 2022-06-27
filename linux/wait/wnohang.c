//WNOHANG
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
	if(fork()==0)
	{
		printf("child process pid: %d\n",getpid());
		sleep(5);
		printf("child process terminated\n");
		exit(0);
	}
	else
	{
		int stat;
		printf("Before waitpid\n");
		waitpid(-1,&stat,WNOHANG);
		printf("after waitpid %d\n",stat);
		while(1);
	}
}
