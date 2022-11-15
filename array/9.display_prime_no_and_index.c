//display array having prime no,print prime no and index value
#include<stdio.h>
int main()
{
	int arr[5],count=0,flag=0;
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<5;i++){
		count=0;
		for(int j=2;j<=arr[i]/2;j++){
			if(arr[i]%j==0)
				count++;
		}
		if(count==0){
			printf("%d is a prime no and present at index: %d\n",arr[i],i);
			flag=1;
		}
	}       
	if(flag==0)
		printf("none of the element is prime\n");
}
