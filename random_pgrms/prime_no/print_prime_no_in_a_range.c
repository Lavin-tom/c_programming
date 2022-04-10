//wap to print the prime nos with in the range

#include<stdio.h>
int main()
{
	int s,e,count=0;
	printf("enter the starting no\n");
	scanf("%d",&s);
	printf("enter the ending no\n");
	scanf("%d",&e);
	
	printf("prime no form %d to %d\n",s,e);

	for(int j=s;j<=e;j++)			
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
