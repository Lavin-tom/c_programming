//behaviour of increment in printf
#include<stdio.h>
int main()
{
	int a=10;
	//in post increment operated from right to left
	printf("%d %d %d\n",a++,a++,a++);
	int b=20;
	//in pre increment latest value is assigned to all 
	printf("%d %d %d\n",++b,++b,++b);
}
