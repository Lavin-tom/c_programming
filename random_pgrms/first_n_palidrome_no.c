//first n palindrome no

#include<stdio.h>
int main()
{
	int n,count=0,sum=0,temp,r;
	printf("enter the n\n");
	scanf("%d",&n);

	for(int i=1;i<100;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			r=temp%10;
			sum=sum*10+r;
			temp=temp/10;
		}
		if(i==sum)
		{
			count++;
		if(count<=n)
			printf("%d ",i);
		}

	}
}
