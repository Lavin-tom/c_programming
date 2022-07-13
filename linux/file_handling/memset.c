//memset
//void *memset(void *s,int c,size_t n);
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd,ret;
	char a[20];
	memset(a,0,20);
	fd=open("temp",O_RDONLY);
	if(fd<0)
	{
		printf("open");
		return 0;
	}
	read(fd,a,5);
	printf("after reading data: %s\n",a);
}
