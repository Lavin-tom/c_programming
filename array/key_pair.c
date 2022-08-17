//key pair
#include<stdio.h>
int main()
{
	int n,x,sum=0,flag=0;
	printf("enter array size\n");
	scanf("%d",&n);
	int arr[n];	
	printf("enter x\n");
	scanf("%d",&x);

	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			sum=arr[i]+arr[j];
			if(sum==x && i!=j)
			{
			flag=1;
			printf("Arr[%d] + Arr[%d] = %d + %d = %d\n",i,j,arr[i],arr[j],sum);
			break;
			}
		}
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
}
