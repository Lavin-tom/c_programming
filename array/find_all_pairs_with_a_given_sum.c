//find all pairs of given sum
#include<stdio.h>
int main()
{
	int n,m;
	printf("enter array size of both\n");
	scanf("%d %d",&n,&m);

	int a[n],b[m];
	printf("enter first array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter second array elements\n");
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);

	int x;
	printf("enter sum \n");
	scanf("%d",&x);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]+b[j]==x)
				printf("%d %d \n",a[i],b[j]);
		}
	}
}
