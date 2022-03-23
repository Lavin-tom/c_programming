//dynamic memory allocation of an array
//malloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *p;
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	//size of array is depends on the n value entered
	p=(int*)malloc(n*sizeof(int));  //p=n*4
	
	printf("enter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}

}
