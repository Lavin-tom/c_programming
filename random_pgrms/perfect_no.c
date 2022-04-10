//wap to check the given no is perfect no or not
//perfect no means- sum of factors of given no, excluding that no is equal to that no itself
//example 6. factors of 6. 1, 2, 3, 6 not consider 6 sum of 1+2+3 =6

#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the no\n");
	scanf("%d",&n);

	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==n)
		printf("%d is a perfect no\n",n);
	else
		printf("%d is not a perfect no\n",n);
}
