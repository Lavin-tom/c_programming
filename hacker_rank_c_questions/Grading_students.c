//grading students

#include<stdio.h>
int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);

	int arr[n],i,j;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		int count=0;
		if(arr[i]>33)
		{
		for(j=arr[i];j<arr[i]+5;j++)
		{
			if(j%5==0)
			{
			break;
			}
			count++;
		}
		if(count<=2)
			arr[i]=j;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
