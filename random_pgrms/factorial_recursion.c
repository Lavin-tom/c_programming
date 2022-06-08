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
int factorial(int a,int fact)
{
	if(a==1)
		return fact;
	else
		fact=fact*a;
	
	factorial(a-1,fact);
}
