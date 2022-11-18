//count duplicate element in an array
#include<stdio.h>
int main()
{
	int arr[5],count=0;
	printf("enter array elements\n");

	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[i]==arr[j])
				count++;
		}
		if(count>1){
			printf("%d is duplicated %d times\n",arr[i],count);
			break;
		}
		count=0;
	}
}
