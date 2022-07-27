//wap to find the missing number in a linear sorted array
#include<stdio.h>
int main()
{
	int n;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n],temp;
	printf("enter array element\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

	//for sort array
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		if((a[i]+1!=a[i+1])&& (i!=0)&&(i!=n-1))
		printf("%d is missing in the sorted array\n",a[i]+1);
	}
}
