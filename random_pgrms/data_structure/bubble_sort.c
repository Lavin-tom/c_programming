//bubble sort
#include<stdio.h>
int main()
{
	int arr[5],temp;
	printf("enter the array elements\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);

	printf("before sorting\n");
        for(int i=0;i<5;i++)
        printf("%d ",arr[i]);

        for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	printf("\nafter array elements\n");
        for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
	printf("\n");
}
