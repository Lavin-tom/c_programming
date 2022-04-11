//wap to swap the upper and lower nibbles

#include<stdio.h>
int main()
{
	int n,temp,t1,t2;
	printf("enter the no\n");
	scanf("%d",&n);

	printf("no before swaping\n");
	for(int i=7;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\nno after swaping\n");
	for(int i=7,j=3;i>=4;i--,j--)
	{
		t1=n>>i&1;
		t2=n>>j&1;
	if(t1!=t2)
	{
		n=n^(1<<i);
		n=n^(1<<j);
	}
	}
	for(int i=7;i>=0;i--)
	{
	printf("%d",n>>i&1);
	}
}

