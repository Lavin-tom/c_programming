//wap to sort an array using selection sort method

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
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}

	}
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}

}
