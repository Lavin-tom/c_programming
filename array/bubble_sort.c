//wap to sort an array using bubble sort method

#include<stdio.h>
int main()
{
	int temp,i,j,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

	}
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}

}
