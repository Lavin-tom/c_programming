#include<stdio.h>
int main()
{ 		//function scope start
	int a=10;  

	{	//block scope start
		int a=20;
		printf("value of a in block scope is %d\n",a);
	}	//block scope end

	printf("value of a in function scope is %d\n",a);
} 		//function scope end
