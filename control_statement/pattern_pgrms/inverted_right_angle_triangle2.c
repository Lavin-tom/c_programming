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
	int n,i,j,k;
	printf("enter the value of n\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		{
			for( j=1;j<=i*2;j++)
			{
				printf(" ");
			}

			for( k=i;k<=n;k++)
			{
				printf("* ");
			}
	
		printf("\n");

		}
}

