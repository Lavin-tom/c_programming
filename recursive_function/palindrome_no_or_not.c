//check the no is palindrome no or not
//using recursion
#include<stdio.h>
#include<stdbool.h>
int palindrome(int);
int main()
{
	int n,result;
	printf("enter n\n");
	scanf("%d",&n);
	result=palindrome(n);
	if(result==n)
		printf("%d is palindrome\n",n);
	else
		printf("%d is not palindrome\n",n);
}
int palindrome(int n)
{
		static int sum=0;
		int r;

		//to reverse the no
		r=n%10;
		sum=sum*10+r;
		n/=10;

	if(n>0)
		palindrome(n);

	return sum;
}
