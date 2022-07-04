//wap to find no is strong no or not
#include<stdio.h>
int main()
{
	int n,fact=1,f,temp,sum=0;
	printf("enter n\n");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		f=n%10;
		while(f>0)
		{
			fact=fact*f;
			f--;
		}
		sum=sum+fact;
		fact=1;
		n=n/10;
	}
	printf("sum of factorial is: %d\n",sum);
	if(temp==sum)
		printf("%d is strong no\n",temp);
	else
		printf("%d is not strong no\n",temp);
}
