//print binary of intergers in a range
//in 8 bit format 

#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("enter the stating range\n");
	scanf("%d",&n1);
	printf("enter the end range\n");
	scanf("%d",&n2);

	if(n2<=255)
	{	
		for(j=n1;j<=n2;j++)
		{
			for(i=7;i>=0;i--)
			{
			printf("%d",j>>i&1);
			}	
		printf("\n");
		}	
	}
	else
		printf("higher than 8 bit no\n");
	
}
