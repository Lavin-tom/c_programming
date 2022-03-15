//wap to print the fibonacci series upto n value

#include<stdio.h>
void fibonacci(int n);
int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d",&n);

	fibonacci(n);
}

void fibonacci(int n)
{
	int a=0,b=1,f=0,i;
	printf("%d %d ",a,b);

	//already printing 0 and 1 so we need to print only remaining
	for(i=0;i<n-2;i++)
	{
		f=a+b;
		printf("%d ",f);
		a=b;
		b=f;
	}
}
