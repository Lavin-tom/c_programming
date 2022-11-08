//find smallest no in an array
#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int small=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]<small)
			small=arr[i];
	}
	printf("smallest no in the array is :%d\n",small);
}
