//write into file
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd,ret;
	char a[20];
	fd=open("temp",O_WRONLY|O_CREAT|O_TRUNC,0644);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	printf("enter data to write into file\n");
	scanf("%s",a);
	ret=write(fd,a,strlen(a));

	if(ret<=0)
	{
		perror("write");
		return 0;
	}
	printf("Data writing into file completed\n");
}
