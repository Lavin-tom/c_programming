//find duplicates value in array
#include<stdio.h>
int main()
{
	int n,zero=-1;
	printf("enter array size\n");
	scanf("%d",&n);
	
	int arr[n],count=0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

		for(int i=0;i<n;i++)
		{
		count=0;
		for(int j=i;j<n;j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
		if(count>1)
			printf("%d ",arr[i]);
	}
		printf("%d\n",count);
	if(count==1)
		printf("non duplicate values: %d \n",zero);
}
