//wap to print the largest and smallest element in a array
//without sorting method
#include<stdio.h>
int main()
{
	int n,count_s,count_l;
	printf("enter array size\n");
	scanf("%d",&n);

	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<n;i++)
	{
		count_s=0;
		count_l=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]<=a[j])
				count_s++;
			else
				count_l++;
		}
		if(count_s==n-1)
			printf("smallest: %d\n",a[i]);
		if(count_l==n-1)
			printf("largest: %d\n",a[i]);
	}
}
