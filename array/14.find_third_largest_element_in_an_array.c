//third largest element in an array
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[5],temp;
	printf("enter first array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
 
	//sorting
	for(int i=0;i<5;i++){
		for(int j=i;j<5;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	int no_of_elements=(sizeof(arr)/sizeof(int));
	printf("array after sorting\n");
	for(int i=0;i<5;i++)
                printf("%d ",arr[i]);

	printf("\nthird largest elements:%d\n",arr[no_of_elements-3]);
}
