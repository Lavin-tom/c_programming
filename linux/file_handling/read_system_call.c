//read system call will not add null char
//so collect the return value of read sys call based on that add null at end of data
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd,ret;
	char a[20];
	fd=open("temp",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return 0;
	}
	ret=read(fd,a,5);
	a[ret]='\0';
	printf("after reading data: %s\n",a);
}
