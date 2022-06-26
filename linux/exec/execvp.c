//execvp
#include<stdio.h>
#include<unistd.h>
int main()
{
	char *p[]={"ls","-l",NULL};
	printf("a.out process started\n");

	execvp("ls",p);
	printf("after execv..\n");
}
