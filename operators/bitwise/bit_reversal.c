//wap to reverse the bit

#include<stdio.h>
int main()
{
	int n,t1,t2;
	printf("enter the no\n");
	scanf("%d",&n);

	printf("before reverse the bit\n");
	for(int i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\nafter reverse the bits\n");
	for(int i=31,j=0;i>j;i--,j++)
	{
		t1=n>>i&1;
		t2=n>>j&1;

		if(t1!=t2)
		{
			n=n^(1<<i);
			n=n^(1<<j);
		}
	}
	for(int i=31;i>=0;i--)
		printf("%d",n>>i&1);
	printf("\n");
}
