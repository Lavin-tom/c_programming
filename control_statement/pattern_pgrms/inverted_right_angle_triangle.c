//wap to print the inverted right angle triangle * pattern
/*-------------------------
 * * * * * 
 * * * *
 * * * 
 * *  
 * 
 --------------------------*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
		{
			for(int j=5;j>i;j--)
			{
			printf("* ");
		
			}
		printf("\n");
		
		}
}