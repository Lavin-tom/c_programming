//factorial using recursion
#include<stdio.h>
int factorial(int,int);
int main()
{
	int n,res=0,fact=1;
	printf("enter the no\n");
	scanf("%d",&n);
	res=factorial(n,fact);					
	printf("factorial of %d is %d\n",n,res);
}
int factorial(int n,int fact) 			
{
	if(n==1)
		return fact;
	else
		fact=fact*n;
	
	factorial(n-1,fact);
}
