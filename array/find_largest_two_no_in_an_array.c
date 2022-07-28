//wap to find the largest two nos in an array
#include<stdio.h>
int main()
{
	int arr[5],count=0;
	printf("enter array elements\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);

	for(int i=0;i<5;i++)
	{
		count=0;
		for(int j=0;j<5;j++)
		{
			if(arr[i]>=arr[j])
			{
				count++;
			}
		}
		if(count==5)
			printf("largest no in this array is: %d\n",arr[i]);
		if(count==4)
			printf("second largest no in this array is : %d\n",arr[i]);
		if(count==1)
			printf("smallest no in this array is : %d\n",arr[i]);
	}
}
