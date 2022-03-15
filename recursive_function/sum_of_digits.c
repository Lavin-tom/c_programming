//wap to find the sum of digits
//using recursive function
//input- 123
//output - 6

#include<stdio.h>
int sum_of_digits(int n);
int main()
{
	int n,sum;
	printf("enter the no\n");
	scanf("%d",&n);
	
	sum=sum_of_digits(n);
	printf("sum of digits: %d\n",sum);	
}

//function body
int sum_of_digits(int n)
{
	if(n==0)
		return 0;
	else

	return (n%10)+sum_of_digits(n/10);
}
