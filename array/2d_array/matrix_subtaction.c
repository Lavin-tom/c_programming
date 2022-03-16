//wap to subtract two matrix

#include<stdio.h>
int main()
{
	int r,c;
	printf("enter the raw\n");
	scanf("%d",&r);
	printf("enter the column\n");
	scanf("%d",&c);
	int i,j;
	int a[r][c],b[r][c],sub[r][c];

	printf("enter the first matrix element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter the second matrix elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		sub[i][j]=a[i][j]-b[i][j];	
	}
	
	printf("after adding elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",sub[i][j]);
		printf("\n");
	}

	
}
