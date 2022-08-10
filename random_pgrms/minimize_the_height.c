//minimize the height
#include<stdio.h>
int main()
{
	int n,k,min,max;
	printf("enter array size\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter value of k\n");
	scanf("%d",&k);

	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		arr[i]=arr[i]+k;
	}

	min=arr[0];
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		else
			max=arr[i];

	}

	printf("largest :%d smallest : %d diff: %d\n",max,min,max-min);
}
