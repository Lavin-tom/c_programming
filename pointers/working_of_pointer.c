//working of pointers
#include<stdio.h>
int main()
{
	int a=258,*ip;
	char *cp;
	cp=&a;
	ip=&a;
	printf("i:%d\n",*ip);
	printf("c:%d\n",*cp);
}
