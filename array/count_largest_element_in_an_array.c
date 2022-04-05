//count largest element in an array

#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n],big=0,count=0;
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//for find the big element
	for(int i=0;i<n;i++)
		{
			if(big<arr[i])
			{
				big=arr[i];
			}
		}
	//to find the count of large element
	for(int i=0;i<n;i++)
	{
		if(big==arr[i]) { count++; }
	}
	printf("count of largest element %d is %d\n",big,count);
}
