//nine divisors
#include<stdio.h>
int main()
{
	int n,count=0,count_n=0;
	printf("enter the value of n\n");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		count=0;
		for(int j=1;j<=n;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==9)
		{
			count_n++;
			printf("%d ",i);
		}
	}
	printf("\n%d no have exactly 9 divisors\n",count_n);
}
