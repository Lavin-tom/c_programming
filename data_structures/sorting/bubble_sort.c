// bubble sort

#include<stdio.h>
int main()
{
	int a[10],temp;
	printf("enter the elements to the array\n");
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);

	//sorting
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("after sorting the array\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
