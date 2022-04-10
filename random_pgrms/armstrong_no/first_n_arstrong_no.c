//wap to print the first n armstrong no
//armstrong no means- 153 total no of digits are 3. (1^3)+(5^3)+(3^3)=153
//cc file_name.c -lm

#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,count=0,m;
	printf("enter the range\n");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		int k=m=i,r,p;
		sum=0;
		count=0;
		//count no of digits
		while(k>0)
		{
			count++;
			k=k/10;
		}
		while(m>0)
		{
			r=m%10;
			p=pow(r,count);		//predefined function for calculate the power
			sum=sum+p;
			m=m/10;
		}
		if(sum==i)
			printf("%d ",i);
	}
}
