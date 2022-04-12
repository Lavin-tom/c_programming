//wap to selection sort the array

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
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("after sorting array using selection sort\n");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
