//wap to print shell variables
#include<stdio.h>
#include<unistd.h>
int main(int argc,char * argv[],char *env[])
{
	int i;
	printf("process started execution\n");
	for(i=0;env[i];i++)
	{
		printf("%s\n",env[i]);
		sleep(1);
	}
	printf("process termination\n");
}
