//insertion sort
#include<stdio.h>
int main()
{
	int arr[5],temp,j;
	printf("enter the array elements\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);

	printf("before sorting\n");
        for(int i=0;i<5;i++)
        printf("%d ",arr[i]);

	//sorting
        for(int i=1;i<5;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}

	printf("\nafter array elements\n");
        for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
	printf("\n");
}
