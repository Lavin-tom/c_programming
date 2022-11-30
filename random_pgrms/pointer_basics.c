//pointer concept
#include<stdio.h>
int main()
{
	int i=10;
	int *p;
	p=&i;
	printf("p:%u\n",p);
	printf("*p:%d\n",*p);
	printf("%d\n",sizeof(*p));
}
