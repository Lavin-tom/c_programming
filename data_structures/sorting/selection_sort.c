//selection sort

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
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting the array\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
