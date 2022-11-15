//largest no in an array
#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	//sum of array
	int large=arr[0];
	for(int i=0;i<5;i++){
		if(large<arr[i])
			large=arr[i];
	}       
	printf("largest element:%d",large);

	printf("\n");
}
