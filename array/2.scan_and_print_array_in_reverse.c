//scan and print array in reverse
#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	for(int i=4;i>=0;i--)
                printf("%d ",arr[i]);

	printf("\n");
}
