//find largest no in an array
#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int large=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>large)
			large=arr[i];
	}
	printf("largest no in the array is :%d\n",large);
}
