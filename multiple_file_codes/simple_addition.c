//simple adddition
#include<stdio.h>
#include "my_header.h"
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);

	//function call
	add(a,b);
	printf("in main :%d + %d = %d\n",a,b,a+b);
}
