//little endian or big endian
#include<stdio.h>
int main()
{
	int x=10;
	char *cp;
	cp=&x;

	if((*cp)==10)
		printf("system follow little endian\n");
	else
		printf("system follow big endian\n");
}
