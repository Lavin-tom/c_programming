//mid point of array
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[5],temp;
	printf("enter first array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	int n=(sizeof(arr)/sizeof(int));
	printf("midpoint: %d\n",arr[n/2]);
}
