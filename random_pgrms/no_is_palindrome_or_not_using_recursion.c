//no is palindrome or not using recursion
#include<stdio.h>
void palindrome(int n,int temp)
{
	static int sum,f;
	if(n!=0)
	{
		while(n>0)
		{
			f=n%10;
			sum=sum*10+f;
			n=n/10;
		}
		palindrome(n,temp);
	}
	else
	{
		if(sum==temp)
			printf("%d is palidrome\n",temp);
		else
			printf("%d is not palindrome\n",temp);
	}
	
}	
int main()
{
	int n,temp;
	printf("enter n\n");
	scanf("%d",&n);
	temp=n;

	palindrome(n,temp);
}
