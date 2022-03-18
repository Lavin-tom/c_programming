//wap to transpose the matrix 

#include<stdio.h>
void get_arr(int r,int c,int arr[r][c]);
void display(int r,int c,int arr[r][c]);
void transpose(int r,int c,int arr[r][c]);
int main()
{
	int r,c;
	printf("enter the raw size\n");
	scanf("%d",&r);
	printf("enter the column size\n");
	scanf("%d",&c);
	int arr[r][c];

	get_arr(r,c,arr);
	display(r,c,arr);
	transpose(r,c,arr);
}

void get_arr(int r,int c,int arr[r][c])
{
	int i,j;
	printf("enter the elements of array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
}
void display(int r,int c,int arr[r][c])
{	
	int i,j;
	printf("matrix before transpose\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void transpose(int r,int c,int arr[r][c])
{	int i,j;
	printf("transpose of matrix \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",arr[j][i]);
		printf("\n");
	}
}
