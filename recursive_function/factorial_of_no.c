//wap to find the factorial using recursive function
#include<stdio.h>
int factorial(int n);
int main()
{
	int n,result;
	printf("enter the no\n");
	scanf("%d",&n);

	result=factorial(n);
	printf("factorial of %d is %d\n",n,result);
}

int factorial(int n)
{
	if(n==1)
		return 1;
	else
	return n*(factorial(n-1));

}
