//wap to print the pyramid * pattern
/*-------------------------
     *	
    * *
   * * * 
  * * * * 
 * * * * *  
 --------------------------*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);

	//for loop for raw size
	for(int i=0;i<n;i++)
		{
			//for loop for space
			for(int j=i;j<n;j++)
				{
				printf(" ");
				}
			//for loop for print *
			for(int k=0;k<=i; k++)
				{
				printf("* ");
				}
		printf("\n");
		
		}
}
