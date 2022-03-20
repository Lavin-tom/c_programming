#include<stdio.h>
int main()
{
	char a[2][2];
	int i,j;
	printf("enter the strings\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%c",&a[i][j]);
		}
	}	
	printf("your strings are \n");
	for( i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}	
}
