//lseek
#include<stdio.h>
#include<fcntl.h>
int main()
{
	char ch;
	int fd, ret;
	fd=open("temp",O_RDONLY);

	if(fd<0)
	{
		perror("open");
		return 0;
	}
	ret=lseek(fd,5,SEEK_SET);
	printf("ret: %d\n",ret);

	read(fd,&ch,1);
	printf("ch: %c\n",ch);
}
