//life of auto storage class
//life means - when memory reserved and when memory unreserved 

#include<stdio.h>
int * fun();
main()
{
	int *p;		//by default there is no storage class is provided then it consider as auto 
	p=fun();	//function call
	printf("%d\n",*p); //value at address of p is printing
} 
int *fun()		//return type is address so use pointer 
{
	int i=10;
	printf("function body \n");
	return &i;
}
// here address of i is return. when ever the function is over. it unreserve the memory location in auto 
// auto variable life end with function declaration over
// so we can't get the actual result we get only GB - garbage value
// ** there is no linkage for auto variables. we can use auto variable only inside the functions**
