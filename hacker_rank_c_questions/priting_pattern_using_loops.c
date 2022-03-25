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
	int n,i,j;
	scanf("%d",&n);
	
	int k=2*n-1;
	int a[k][k];
	for(i=0;i<n;i++)
	{
		for(j=i;j<k-i;j++)
		{
			//for upper row
			a[i][j]= n-i;
			//for bottom row
			a[2*n-2-i][j]=n-i;
			//left column
			a[j][i]=n-i;
			//right column
			a[j][2*n-2-i]=n-i;
		}
	}
	//printing of 2 D array
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		printf("%d ",a[i][j]);           
		printf("\n");
	}
}
