//wap to check the no is armstrong no or not
//in terminal complition should be in the form cc armstrong_no.c -lm

#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,temp2,count=0,p,sum=0,r;
	printf("enter the no\n");
	scanf("%d",&n);
	temp=temp2=n;
	//to find no of digits 
	while(temp>0)
	{
		count++;
		temp=temp/10;
	}
	while(n>0)
	{
		r=n%10;
		p=pow(r,count); //predefined math function for find the power of a number
		sum=sum+p;
		n=n/10;
	}
	if(sum==temp2)
		printf("%d is an armstrong no\n",temp2);
	else
		printf("%d is not an armstrong no\n",temp2);

}
