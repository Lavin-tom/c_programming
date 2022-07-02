//test.c
//redeclaration of variable 

#include<stdio.h>
int main()
{
	int x=10;
	printf("x: %d\n",x);
	//int x=20;
	x=20;
	printf("x: %d\n",x);
}
