//sum of digits using recursion
#include<stdio.h>

int sum(int);
int main()
{
	int n,r;
	printf("enter n\n");
	scanf("%d",&n);
	
	r=sum(n);
	printf("sum : %d\n",r);
}
int sum(int n)
{
	static int s=0;
	int d;
	if(n==0)
		return s;
	else
	{
		d=n%10;
		s=s+d;
		sum(n/10);
	}
}
