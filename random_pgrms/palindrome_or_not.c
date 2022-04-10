//wap to check the no is palindrome or not

#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter the no\n");
	scanf("%d",&n);

	int temp=n;

	//logic of reverse the no
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	//if given no and reverse no is equal print palindrome
	if(sum==temp)
		printf("no is palindrome\n");
	else
		printf("no is not palindrome\n");
}
