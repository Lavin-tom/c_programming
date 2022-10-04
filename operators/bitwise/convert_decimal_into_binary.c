//wap to convert a no into 
//binary

#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the no\n");
	scanf("%d",&n);

	printf("equalent binary of %d no is ",n);

	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\n");
}
