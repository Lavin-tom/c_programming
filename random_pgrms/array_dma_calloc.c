//array
//dynamic memory allocation
//calloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	p=(int *)calloc(1,n*sizeof(int));

	printf("enter the array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&p[i]);
	printf("your array\n");
	while(i<n)
	{
		printf("%d ",p[i]);
		i++;
	}
}
