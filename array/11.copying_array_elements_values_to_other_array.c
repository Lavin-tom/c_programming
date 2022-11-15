//copy array elements
#include<stdio.h>
#include<math.h>
int main()
{
	int arr1[5],arr2[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr2[i]);

	for(int i=0;i<5;i++)
		arr1[i]=arr2[i];

	for(int i=0;i<5;i++)
                printf("%d ",arr1[i]);
	printf("\n");

	for(int i=0;i<5;i++)
                printf("%d ",arr1[i]);

	printf("\n");
}
