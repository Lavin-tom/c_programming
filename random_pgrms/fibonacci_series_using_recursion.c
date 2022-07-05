//fibonacci series
#include<stdio.h>
#include<stdlib.h>
void fib(int n,int sum)
{
	static int count=0;
	static int f=0,s=1;

	if(count==n-2)
	{
		printf("\n");
		exit(0);
	}
	else
	{
		printf("%d ",sum);
		count++;
		f=s;
		s=sum;
		sum=s+f;
		fib(n,sum);
	}
}

int main()
{
	int n,f,s,sum=0;
	printf("enter n\n");
	scanf("%d",&n);
	
	f=0;
	s=1;
	sum=f+s;
	printf("%d ",f);
	printf("%d ",s);
	fib(n,sum);
}
