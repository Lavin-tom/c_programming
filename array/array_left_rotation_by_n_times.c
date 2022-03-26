//array left rotation 
//left rotate by n times 

#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n],arr_temp[n],i,j,r;
	printf("enter value for left rotation\n");
	scanf("%d",&r);

	printf("enter value into array\n");
	//get array element from user
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	//rotation of strings according to left shift value 
	for(i=r,j=0;i<n;i++,j++)
	{
		arr_temp[i]=arr[j];
	}
	for(i=0,j=n-r;i<r;i++,j++)
	{
		arr_temp[i]=arr[j];
	}

	//printing the final array
	for(i=0;i<n;i++)
	{
	printf("%d ",arr_temp[i]);
	}
}
