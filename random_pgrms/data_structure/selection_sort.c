//selection sort
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
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("\nafter array elements\n");
        for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
	printf("\n");
}
