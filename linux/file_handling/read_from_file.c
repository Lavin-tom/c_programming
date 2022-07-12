//read from file
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd,ret;
	char ch;
	fd=open("temp",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	while(ret=read(fd,&ch,1)>0)
		printf("ch=%c\n",ch);
}
