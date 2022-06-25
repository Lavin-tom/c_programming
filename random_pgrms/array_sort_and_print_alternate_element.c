//sort elements in an array
//print alternate values 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,temp;
	printf("enter the size of array\n");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("before sorting\n");
	 for(int i=0;i<n;i++)
                printf("%d ",arr[i]);
	 printf("\n");

	for(int i=0;arr[i];i++)
	{
		for(int j=i+1;arr[j];j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("after sorting\n");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);

	int n2,*arr2;
	if(n%2==0)
		n2=n/2;
	else
		n2=(n/2)+1;
	arr2=calloc(n2,sizeof(int));

	for(int j=0,i=0;arr[j];j++,i=i+2)
	{
		arr2[j]=arr[i];
	}
	printf("\nalternate elements\n");
	 for(int i=0;i<n2;i++)
                printf("%d ",arr2[i]);
}
