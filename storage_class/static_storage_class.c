//static storage class

#include<stdio.h>
//now static int i is a global variable 
static int i;			
//by default static value is zero. if not initializing any value it consider as zero
int main()
{
	printf("default value of static is %d\n",i);
	static int i=10;
	//now i is local variable
	//new value of i is initialized to i variable 
	printf("value of static int i is %d\n",i);
}

//static storage class
//by default the value of static is zero // static int i; then value of i is zero
//static storage class stored in data section
//data section are of two types,
//static int i;------ it is uninitialized data section (B.S.S)
//static int i=10;-----it is initialiized date section
