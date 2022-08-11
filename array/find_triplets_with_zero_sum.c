//find triplets with zero sum
#include<stdio.h>
int main()
{
	int n;
	printf("enter array size\n");
	scanf("%d",&n);

	int arr[n],count=0;
	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

	for(int i=0;i<n;i++)
	{
		if(arr[i]+arr[i+1]+arr[i+2]==0)	
		{
			printf("%d %d %d\n",arr[i],arr[i+1],arr[i+2]);
			count++;
		}
		//check the sum of second last,last and first index 
		if(i==n-2)
		{
			if(arr[i]+arr[i+1]+arr[0]==0)
			{
				//printing possible values
				printf("%d %d %d\n",arr[i],arr[i+1],arr[0]);
				count++;
			}
		}
		//check the sum of last first and second index
		if(i==n-1)
		{
			if(arr[i]+arr[0]+arr[1]==0)
			{
				//printing possible values
				printf("%d %d %d\n",arr[i],arr[0],arr[1]);
				count++;
			}
		}
	}
	printf("%d \n",count);
}
