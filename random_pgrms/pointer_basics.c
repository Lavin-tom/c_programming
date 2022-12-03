//pointer concept
#include<stdio.h>
int main()
{
	int i=10;
	int *p;
	p=&i;
	printf("p:%u\n",p);
	printf("*p:%d\n",*p);
	printf("size of: %d\n",sizeof(*p));
}
