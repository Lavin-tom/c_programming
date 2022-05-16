//quick sorting
//not yet completed

#include<stdio.h>
void quick_sort(int arr[5],int,int);
int main()
{
	int arr[5]={10,2,8,4,6};

	quick_sort(arr,0,5-1);

	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
}

void quick_sort(int arr[5],int start,int end)
{
	int i,j,pivot,temp;

	if(start<end)
	{
		pivot=start;
		i=start;
		j=end;

		while(i<j)
		{
			while(arr[i]<=arr[pivot] && i<end)
				i++;
			while(arr[j]>arr[pivot])
				j--;
			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		quick_sort(arr,start,j-1);
	}
}
