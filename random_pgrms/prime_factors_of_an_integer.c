//prime factors of an integer
#include<stdio.h>
int main()
{
	int n,count=0,j;
	printf("enter the no\n");
	scanf("%d",&n);

	for(int i=2;i<=n;i++)
	{
		//for find the factors
		if(n%i==0)
		{
			//for find the prime nos from those factors
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
					count++;
			}
			if(count==0)
				printf("%d ",i);
		}
		count=0;
	}
	printf("\n");
}
