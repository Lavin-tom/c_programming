//wap to bubble sort the array

#include<stdio.h>
int main()
{
	int temp,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	//bubble sort
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("after sorting array using bubble sort\n");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
