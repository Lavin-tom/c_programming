//matrix addition without functions
//learn to implement functions in array

#include<stdio.h>

//to get the elements 
void accept(int r,int c,int arr[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		scanf("%d",&arr[i][j]); //*(*(arr+i)+j)
	}
}
// to display the final matrix
void display(int r,int c,int arr[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}

}
// addition of two matrix 
void addition(int r,int c,int arr1[r][c],int arr2[r][c],int sum[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		sum[i][j]=arr1[i][j]+arr2[i][j];
	}
}

int main()
{
	int r,c;
	printf("enter the raw size\n");
	scanf("%d",&r);
	printf("enter the column size\n");
	scanf("%d",&c);

	int a[r][c],b[r][c],sum[r][c];

	printf("enter the elements of a\n");
	accept(r,c,a);

	printf("enter the elements of b\n");
	accept(r,c,b);
	
	addition(r,c,a,b,sum);
	printf("sum of matrix a and b is \n");
	display(r,c,sum);

}

