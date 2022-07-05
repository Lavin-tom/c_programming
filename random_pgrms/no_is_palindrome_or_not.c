//no is palindrome or not
#include<stdio.h>
int main()
{
	int n,sum=0,temp,f;
	printf("enter n\n");
	scanf("%d",&n);
	temp=n;

	//integer reverse logic
	while(n>0)
	{
		f=n%10;
		sum=sum*10+f;
		n=n/10;
	}
	if(temp==sum)
		printf("%d is palindrome\n",temp);
	else
		printf("%d is not palindrome\n",temp);
}
