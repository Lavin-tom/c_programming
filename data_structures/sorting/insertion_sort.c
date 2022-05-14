// insertion sort

#include<stdio.h>
int main()
{
	int a[10],temp,j;
	printf("enter the elements to the array\n");
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);

	//sorting
	for(int i=1;i<10;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j] >temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("after sorting the array\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
