//global and local variables
//with examples

#include<stdio.h>
void fun(int);
int b=20; //b is global variable 
int main()
{
	int a=10; 	//a is local variable 
	printf("printing local variable %d\n",a);
	printf("printing global variable %d\n",b);
	fun(a);
}
// we can use the global variable inside any functions 
// but we cant use local variable outside the functons without passing 
void fun(int a)
{
	printf("printing global variable inside the function %d\n",b);
	printf("printing local variable inside the function %d\n",a);
}
