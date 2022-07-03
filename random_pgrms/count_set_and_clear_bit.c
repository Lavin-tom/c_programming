//count no of set and clear bits
#include<stdio.h>
int main()
{
	int n,count_1=0,count_0=0;
	printf("enter n\n");
	scanf("%d",&n);

	printf("Binary equalent\n");
	for(int i=31;i>=0;i--)
	{
		printf("%d",(n>>i)&1);
		if((n>>i)&1==1)
			count_1++;
		else
			count_0++;
	}
	printf("\nno of set bits: %d\n",count_1);
	printf("no of clear bits: %d\n",count_0);
}
