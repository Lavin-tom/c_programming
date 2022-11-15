//avertage of array elements
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
        int avg=sum/5;       
	printf("sum:%d average:%d",sum,avg);

	printf("\n");
}
