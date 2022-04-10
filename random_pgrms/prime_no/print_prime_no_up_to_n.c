//wap to print prime up to n

#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the range\n");
	scanf("%d",&n);

	for(int j=2;j<=n;j++)			
	{
		count=0;
		for(int i=2;i<=j/2;i++)		
		{
			if(j%i==0)
			{
				count++;
			}
		}
	if(count==0)
		printf("%d ",j);
	}
	printf("\n");
}
