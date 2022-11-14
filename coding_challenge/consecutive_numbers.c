//Consecutive numbers
//Create a function that determines whether elements in an array 
//can be re-arranged to form a consecutive list of numbers where each number 
//appears exactly once.

#include<stdio.h>
int main()
{
	int arr[10],temp,flag=0;
	printf("enter array elements\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);

	//bubble sort
	for(int i=0;i<10;i++){
		for(int j=i;j<10;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		if(arr[i]==arr[i+1]){
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("array can be arranged consecutive form and each no is appeared only once\n");
	else
		printf("not possible to arrange, more than one no is appeared\n");
}
