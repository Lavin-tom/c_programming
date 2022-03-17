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
// multiplication of two matrix 
void multiplication(int m,int n,int a[m][n],int p,int q,int b[p][q],int c[m][q])
{
	int i,j,k,sum=0;
	for(i=0;i<m;i++)
        {
                for(j=0;j<q;j++)
                {
                        for(k=0;k<p;k++)
                                {
                                sum=sum+a[i][k]*b[k][j];
                                }
                        c[i][j]=sum;
                        sum=0;
                }
        }
}

int main()
{
	int m,n,p,q;
	printf("enter the raw size of matrix a\n");
	scanf("%d",&m);
	printf("enter the column size of matrix a\n");
	scanf("%d",&n);

	printf("enter the raw size of matrix b\n");
	scanf("%d",&p);
	printf("enter the column size of matrix b\n");
	scanf("%d",&q);

	int a[m][n],b[p][q];
	if(n!=p)
	{
		printf("matrix multiplication is not possible\n");
		printf("first matrix column and second matrix raw must be equal to perform multiplication\n");
	}
	else
	{
	int c[m][q];
	printf("enter the elements of a\n");
	accept(m,n,a);

	printf("enter the elements of b\n");
	accept(p,q,b);
	
	multiplication(m,n,a,p,q,b,c);
	printf("product of matrix a and b \n");
	display(m,q,c);
	}

}

