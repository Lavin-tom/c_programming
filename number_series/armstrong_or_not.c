//wap to check the given no is armstrong no or not

#include<stdio.h>
#include<math.h>
int armstrong(int n,int count);
int count_digit(int n);
int main()
{
	int n,result,count=0;
	printf("enter the no\n");
	scanf("%d",&n);
	count=count_digit(n);
	result=armstrong(n,count);
	if(result ==1)
		printf("%d is armstrong no\n",n);
	else
		printf("%d is not an armstrong no\n",n);
}
int count_digit(int n)
	{
		int count=0;
		while(n>0)
		{
		count++;
		n=n/10;
		}
		return count;
	}
int armstrong(int n,int count)
{
	int temp,power,sum=0,f;
	temp=n;
	while(n>0)
	{
	f=n%10;
	power=pow(f,count);
	sum=sum+power;
	n=n/10;
	}
	if(temp==sum)
		return 1;
	else
		return 0;
}
