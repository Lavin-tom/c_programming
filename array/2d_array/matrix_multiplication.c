//matrix multiplication without functions

#include<stdio.h>
int main()
{
	int m,n,p,q;
	int i,j,k,sum=0;
	printf("enter the raw and column of first matrix\n");
	scanf("%d %d",&m,&n);
	printf("enter the raw and colum of second matrix\n");
	scanf("%d %d",&p,&q);

	//final matrix of this format
	int multi[m][q];
	if(n!=p)
	{
		printf("matrix multiplication is not possible with entered raw and column\n");
		printf("first matrix column and second matrix raw must be equal to multiply each other\n");
	}
	else
	{
		int a[m][n],b[p][q];
	printf("enter the elements of first raw\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter the elements of second raw\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
	}
		
	//matrix multiplication start here
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
				{
				sum=sum+a[i][k]*b[k][j];
				}
			multi[i][j]=sum;
			sum=0;
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
			printf("%d ",multi[i][j]);
		printf("\n");
	}
	}
}
