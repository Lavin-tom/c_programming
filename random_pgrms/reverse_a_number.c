//reverse a number
#include<stdio.h>
int main()
{
	int n,f,sum=0;
	printf("enter n\n");
	scanf("%d",&n);

	while(n>0)
	{
		f=n%10;
		sum=sum*10+f;
		n=n/10;
	}
	printf("%d\n",sum);
}
