//insertion sort

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,temp;
	srand(getpid());
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int a[n];

	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);	

	printf("Array before sorting\n");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);

	//insertion sorting
	for(int i=1;i<n;i++)
	{
		j=i-1;
		temp=a[i];
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	//printing array after sorting
	printf("\nAfter sorting\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}