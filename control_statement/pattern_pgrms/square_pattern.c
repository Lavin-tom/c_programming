//wap to print the square * pattern
/*-------------------------
 * * * * * 
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 --------------------------*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
			printf("* ");
		
			}
		printf("\n");
		
		}
}
