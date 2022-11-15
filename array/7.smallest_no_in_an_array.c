//smallest no in an array
#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	int small=arr[0];
	for(int i=0;i<5;i++){
		if(small>arr[i])
			small=arr[i];
	}       
	printf("smallest element:%d",small);

	printf("\n");
}
