//addition of array elements
#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	//sum of array
	int sum=0;
	for(int i=0;i<5;i++)
		sum=sum+arr[i];
                
	printf("sum:%d ",sum);

	printf("\n");
}
