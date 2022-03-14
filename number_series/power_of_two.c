//wap to find the given no is power of 2 

#include<stdio.h>
int main()
{
	int n,result;
	printf("enter the no\n");
	scanf("%d",&n);

	//if power of two n&(n-1) is zero 
	result=n&(n-1);
	if(result==0)
		printf("%d is power of 2\n",n);
	else
		printf("%d is not a powr of 2\n",n);
}
