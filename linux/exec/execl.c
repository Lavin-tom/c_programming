//execl
#include<stdio.h>
int main()
{
	printf("first...\n");
	printf("process id: %d parent process id: %d\n",getpid(),getppid());
	//system("ls");
	execl("/bin/ls","ls",NULL);		//a.out is replaced with ls
	printf("second..\n");
}
