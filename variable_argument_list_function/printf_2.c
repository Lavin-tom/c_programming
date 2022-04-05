//variable argument list function
//printf

#include<stdio.h>
int main()
{
	int x=123,ret;
	ret=printf("%d\n",printf("x=%d\n",x));    //x=123\n 6\n 2

	printf("%d\n",ret);
}
