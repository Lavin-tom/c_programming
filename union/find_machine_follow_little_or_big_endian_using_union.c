//find the system follow little endian or big endian architecture

#include<stdio.h>
union s 
{
	int x;
	char y;
}v;
int main()
{
	v.x=1;
	if(v.y==1)
		printf("your system follows Little Endian\n");
	else
		printf("your system follows Big Endian\n");
}
