/*Print a pattern of numbers from  to  as shown below. 
 * Each of the numbers is separated by a single space.
   
4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4
4 4 4 4 4 4 4 
---------------*/

#include<stdio.h>
int main()
{
	int n,i,k,j;
	scanf("%d",&n);

	for(i=0;i<n*2-1;i++)
	{
		for(j=0;j<n*2-1;j++)
		{
			if(i==0 || j==0 || j==n*2-2 || i==n*2-2 )
			printf("%d ",n);
			else if(i==1 || j==1 || j==n*2-3 || i==n*2-3 )
			printf("%d ",n-1);
			else if(i==2 || j==2 || j==n*2-4 || i==n*2-4 )
			printf("%d ",n-2);
			else
			printf("1 ");
		}
		printf("\n");
	}
}
