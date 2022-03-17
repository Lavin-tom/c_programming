//wap to sum all the elements in the array

#include<stdio.h>
int array_sum(int a[],int n);
int main()
	{
	int n,sum=0,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the element into array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=array_sum(a,n);
	printf("sum of element is %d\n",sum);

	}
int array_sum(int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
