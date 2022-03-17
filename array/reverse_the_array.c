//wap to reverse the elements in the array

#include<stdio.h>
void reverse(int a[],int n);
int main()
	{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the element into array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(a,n);
	printf("after reverse the string\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");

	}
//reverse the string using a third variable temp
void reverse(int a[],int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
