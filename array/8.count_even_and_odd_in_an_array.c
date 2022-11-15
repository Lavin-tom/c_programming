//count even and odd no in an array
#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	int even=0,odd=0;
	for(int i=0;i<5;i++){
		if(arr[i]%2==0)
			even++;
		else
			odd++;
	}       
	printf("even:%d odd:%d",even,odd);

	printf("\n");
}
