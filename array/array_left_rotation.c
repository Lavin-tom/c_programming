//array left rotation 
//left rotate by one 

#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n],arr_temp[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		arr_temp[i]=arr[i-1];
	}
	arr_temp[0]=arr[n-1];

	for(i=0;i<n;i++)
	{
	printf("%d ",arr_temp[i]);
	}
}
