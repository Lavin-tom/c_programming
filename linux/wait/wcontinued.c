//collecting the Resumed child stat by using WCONTINUED
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
	if(fork()==0)
 	{
		printf("child process pid:%d\n",getpid());
		sleep(20);
		printf("child process terminated..\n");
		exit(0);
	}
	else
 	{
		int stat;
		//printf("in parent process..\n");
		printf("Before waitpid..\n");
		waitpid(-1,&stat,WCONTINUED);
		printf("after waitpid:%d\n",stat);
		while(1);
	}
}
