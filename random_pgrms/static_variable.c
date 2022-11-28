//static variable
#include<stdio.h>
int my_function();
int main()
{
	printf("%d\n",my_function());
	printf("%d\n",my_function());
}
int my_function()
{
	static int m=0;
	m++;
	return m;
}
