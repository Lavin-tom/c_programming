//wap to print the not common digits in two arrays
#include<stdio.h>
int main()
{
	int n,m;
	printf("enter size of array one and two\n");
	scanf("%d %d",&n,&m);

	int a[n],b[m],count=0;
	printf("enter array1 elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("enter array2 elements\n");
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);

	printf("missing elements\n");
	for(int i=0;i<n;i++)
	{
		count=0;
	 	for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
				count++;
		}
		if(count==0)
			printf("%d ",a[i]);
	}
	printf("\n");
}
