//wap to convert decimal into binary
#include<stdio.h>
int main()
{
	int num;
	printf("enter num\n");
	scanf("%d",&num);

	printf("equalent binary no:\n");
	for(int i=7;i>=0;i--)
	{
		printf("%d",num>>i&1);
	}
	printf("\n");
}
