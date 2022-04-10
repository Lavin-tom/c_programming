//wap to check the given no prime or not

#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the no\n");
	scanf("%d",&n);

	for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
				count++;
		}
	if(count==0)
		printf("%d is prime no\n",n);
	else
		printf("%d is not a prime no\n",n);
}
