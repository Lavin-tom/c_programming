//exclp

#include<stdio.h>
#include<unistd.h>
int main()
{
	int ret;
	printf("first\n");
	execlp("cal","cal","2020",NULL);
	if(ret==-1)
		perror("execl");
	printf("last\n");
}
