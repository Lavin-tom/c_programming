//wap to find the no is armstrong no or not

#include<stdio.h>
#include<math.h>
int main()
{
	int n,digits,temp,temp1,power,sum=0,f;
	printf("enter no\n");
	scanf("%d",&n);
	temp=temp1=n;

	//to find no of digits 
	while(temp>0)
	{
		digits++;
		temp=temp/10;
	}
	printf("no of digits are : %d\n",digits);

	//power of digits
	while(temp1>0)
	{
		f=temp1%10;
		power=pow(f,digits);
		sum=sum+power;
		power=0;
		temp1=temp1/10;
	}
	printf("sum of digits are: %d\n",sum);
	if(n==sum)
		printf("%d is an armstrong no\n",n);
	else
		printf("%d is not an armstrong no \n",n);
}
