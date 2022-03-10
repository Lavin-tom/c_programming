//static storage class

#include<stdio.h>
void fun();
//global variable
static int i=10;
int main()
{
	//local variable
	static int i=20;
	printf("value of static int inside the local variable %d\n",i); //check for value of i localy avilable or not.
	//function call
	fun ();
}
//function body
void fun()
{
	printf("value of static global variable is %d\n",i); //here inside the function i not declared but it declared globaly 
}
