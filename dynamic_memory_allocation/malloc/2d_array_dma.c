//by using dynamic memory allocation add elements in 2d array and print the elements 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **dp;
	int i,j,r,c;

	printf("enter the no of raw\n");
	scanf("%d",&r);

	printf("enter the no of column\n");
	scanf("%d",&c);
	
	//first index is consider as no of 1d array
	dp=(int**)malloc(r*sizeof(int*));
      	for(i=0;i<r;i++)
	//second index consider as no of elements in 1d array
	dp[i]=(int*)malloc(c*sizeof(int));	

	printf("\nenter the elements into the array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&dp[i][j]);
	}

	printf("\nelements of array are \n");
        for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",dp[i][j]);
		printf("\n");	
	}

}
