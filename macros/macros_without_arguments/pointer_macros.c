//macros in pointers

#include<stdio.h>
#define pointer int *
int main()
{
	//pointer p,q;  //means to int *p,q;
	pointer p;
	pointer q;
	int x=10,y=20;
	p=&x;
	q=&y;
	printf("%d %d\n",*p,*q);
}

//this program leads to compile time errror
//because q is not a pointer 
//to resolve 
//pointer p;
//pointer q;
