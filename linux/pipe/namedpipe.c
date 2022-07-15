//creating namedpipe
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd;
	char buf[20];
	mkfifo("np",0644);
	perror("mkfifo");

	//printf("Hai..\n");
	fd=open("np",O_WRONLY);
	
	printf("enter data...\n");
	while(1)
	{
		scanf("%s",buf);
		write(fd,buf,strlen(buf)+1);
	}
	//printf("after open system call\n");
}
