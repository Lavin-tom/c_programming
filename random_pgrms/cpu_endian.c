//wap to find the cpu endian 
//little endian or big endian

#include<stdio.h>
int main()
{
	int n=10;
	if((n>>8)==0)
		printf("system follow little endian\n");
	else
		printf("system follow big endian\n");
}
