//pointer
#include<stdio.h>
int main()
{
	unsigned int *n,m=10;
	n=&m;
	printf("m: %d\n",&m);
	printf("n: %d\n",n);
	printf("*n: %d\n",*n);
	*n=20;
	printf("m: %d\n",m);
}
