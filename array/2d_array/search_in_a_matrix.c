//search in a matrix
#include<stdio.h>
int main()
{
	int n,m,x,flag=0;
	printf("enter array row and column\n");
	scanf("%d %d",&n,&m);

	int mat[n][m];
	printf("enter matrix elements\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("enter element to search \n");
	scanf("%d",&x);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mat[i][j]==x)
			{
				printf("1: %d is present in the matrix\n",x);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
		printf("0: %d is not present in the matrix\n",x);
}
