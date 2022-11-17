//Mutation only: zeroes to the end
//Write a function that moves all the zeroes to the end of an array.
// Do this without returning a copy of the input array.

#include<stdio.h>
int main()
{
	int arr[10],temp;
	printf("enter array elements\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<10;i++){
		if(arr[i]==0){
			for(int j=i;j<10;j++){
				if(arr[j]!=0){
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		}
	}
	for(int i=0;i<10;i++)
		printf("%d ",arr[i]);
				
}
