//basics of dma 
//malloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *ptr;
	printf("enter no of elements\n");
	scanf("%d",&n);
	
	//dma using malloc
	ptr=(int *)malloc(n*sizeof(int));

	if(ptr==NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}
	else
	{
		printf("memory sucessfully allocated using malloc\n");
		//adding elements to the array
		for(int i=0;i<n;i++)
		{
			ptr[i]=i+1;
		}

		//printing elements
		for(int i=0;i<n;i++)
		{
			printf("%d ",ptr[i]);
		}

	}
	printf("\n");
}
