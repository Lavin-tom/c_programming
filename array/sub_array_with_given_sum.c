//sub array with given sum
//given an unsorted array A of size N that contain only non-negative integers,
//find a continuous sub-array which adds to a given number S
//in case of multiple subarray return the subarray which comes first on moving from left to right

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter array size\n");
	scanf("%d",&n);
	int A[n],s;

	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);

	printf("enter sum\n");
	scanf("%d",&s);

	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum=sum+A[j];
			//printf("%d\n",sum);
			if(sum==s)
			{
				printf("%d %d\n",i+1,j+1);
				exit(0);
			}
		}
	}
}
