//count armstrong no in an array
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[5],count=0,d,temp,temp1,sum=0,count_armstrong=0;
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<5;i++){
		sum=0;
		count=0;
		temp=arr[i];
		temp1=arr[i];
		while(temp>0){
			count++;
			temp=temp/10;
		}
		while(temp1>0){
			d=temp1%10;
			//power function from math.h
			sum=sum+(pow(d,count));
			temp1=temp1/10;
		}
		if(sum==arr[i]){
			printf("%d ",arr[i]);
			count_armstrong++;
		}
		}
		printf("\ntotal armstrong no this array : %d\n",count_armstrong);
}
