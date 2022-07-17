//full duplex comm using single named pipe
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char RD_Buff[20],WR_Buff[20];
	int fd1,fd2;
	mkfifo("np1",0644);
	mkfifo("np2",0644);
	perror("mkfifo");

	fd1=open("np1",O_RDWR);
	fd2=open("np2",RDWR);

	if(fork()==0)
	{
		while(1)
		{
			read(fd1,RD_Buff,sizeof(RD_Buff));
			printf("%s\n",RD_Buff);
		}
	}
	else
	{
		while(1)
		{
			scanf("%s",WR_Buff);
			write(fd2,WR_Buff,strlen(WR_Buff)+1);
		}
	}
}
