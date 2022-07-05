//fibonacci series
#include<stdio.h>
int main()
{
	int f=0,s=1,sum,n,count=0;
	printf("enter n\n");
	scanf("%d",&n);

	printf("%d ",f);
	printf("%d ",s);
	
	while(count<n-2)
	{
		sum=f+s;
		printf("%d ",sum);
		f=s;
		s=sum;
		count++;
	}
	printf("\n");
}
