//no of boomerangs
#include<stdio.h>
int main()
{
	int arr[10],count=0;
	printf("enter array elements\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(int j=0;j<10-2;j++){
		//if(arr[j]!=arr[j+1] && arr[j]==arr[j+2]){
			printf("%d!=%d, %d==%d",arr[j],arr[j+1],arr[j],arr[j+2]);
			count++;
		}
	}
	printf("%d boomerangs in this sequence\n",count);
}
