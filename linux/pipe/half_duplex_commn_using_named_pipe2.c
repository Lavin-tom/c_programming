//half duplex commn using single named pipe

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char a[20];
	int fd;
	mkfifo("np",0644);
	perror("mkfifo");

	fd=open("np",O_RDWR);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("enter data\n");
	while(1)
	{
		read(fd,a,sizeof(a));
		printf("%s\n",a);
		scanf("%s",a);
		write(fd,a,strlen(a)+1);
		sleep(1);
	}
}
