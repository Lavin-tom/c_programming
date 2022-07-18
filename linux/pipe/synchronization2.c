//with synchronization
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd,i=0;
	struct flock v;
	char a[20]="123456";
	fd=open("temp",O_WRONLY|O_CREAT|O_APPEND,0644);

	if(fd<0)
	{
		perror("open");
		return 0;
	}
	v.l_type=F_WRLCK;
	v.l_whence=SEEK_SET;
	v.l_start=0;
	v.l_len=0;

	printf("Beofe lock\n");
	fcntl(fd,F_SETLKW,&v);
	printf("After fcntl\n");
	printf("lock granted..\n");
	printf("p1 process writing data into file\n");
	while(a[i])
	{
		write(fd,a+i,1);
		sleep(1);
		i++;
	}
	printf("Data writing into file by p1 process is completed\n");
	sleep(10);
	v.l_type=F_UNLCK;
	fcntl(fd,F_SETLK,&v);
	printf("lock relased..\n");
}
