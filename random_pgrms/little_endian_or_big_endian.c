//wap to find pc is little endian or big endian
#include<stdio.h>
int main()
{
	char a=1;
	if((a>>8) == 0)
		printf("Little endian\n");
	else
		printf("Big endian\n");
}
