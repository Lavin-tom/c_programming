//named pipe
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	char buf[20];
	mkfifo("np",0644);
	perror("mkfifo");

	//printf("Hello..\n");
	
	fd=open("np",O_RDONLY);
	while(1)
	{
		read(fd,buf,sizeof(buf));
		printf("after reading data from fifo: %s\n",buf);
	}
	//printf("after open call...\n");
}

