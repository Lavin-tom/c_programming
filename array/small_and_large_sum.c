//small and large possible by array elements

#include<stdio.h>
int main()
{
	int arr[5],arr2[5],sum=0,temp;
	printf("enter the array elements\n");
	for(int i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}

	//total sum of elements in array
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	//adding sum to new array arr2
	for(int i=0;i<5;i++)
	{
		arr2[i]=sum-arr[i];
	}
	//sorting of array
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr2[i]>arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}	
		}

	}

	//printing the arr2 
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\nsmallest possible sum : %d\n",arr2[0]);
	printf("Largest possible sum : %d\n",arr2[4]);
}
