//wap to find the given no is perfect no or not
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter no\n");
	scanf("%d",&n);

	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("%d is perfect no\n",n);
	else
		printf("%d is not perfect no\n",n);
}
