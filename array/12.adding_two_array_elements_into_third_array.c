//add additon of elements into another array
#include<stdio.h>
#include<math.h>
int main()
{
	int arr1[5],arr2[5],arr3[5];
	printf("enter first array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr1[i]);
 	printf("enter second array elements\n");
	for(int i=0;i<5;i++)
        	scanf("%d",&arr2[i]);

	for(int i=0;i<5;i++)
		arr3[i]=arr1[i]+arr2[i];
	
	printf("sum of array elements\n");
	for(int i=0;i<5;i++)
                printf("%d ",arr3[i]);
	printf("\n");
}
