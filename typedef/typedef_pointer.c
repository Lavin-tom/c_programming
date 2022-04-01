// typedef with pointers

#include<stdio.h>
typedef int *pointer;
typedef int integer;
int main()
	{
	integer x=10,y=20;
	pointer p,q; // equals to int *p,*q;
	p=&x;
	q=&y;
	printf("%d %d\n",*p,*q);
	*p=100;
	*q=200;
	printf("%d %d\n",*p,*q);
	}
