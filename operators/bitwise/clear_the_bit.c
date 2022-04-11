//wap to clear the bit
//set means bit position value change to 0. if already 0. not change
//example - 10 0000 1010 bp=1 after set the bit= 0000 1000 value become 8

#include<stdio.h>
int main()
{
	int n,bp;
	printf("enter the no\n");
	scanf("%d",&n);
	
	printf("enter the bit position to clear the bit\n");
	scanf("%d",&bp);

	printf("before clear the bit\n");
	for(int i=7;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\nafter clear the bit\n");
	n=n&~(1<<bp);
	for(int i=7;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\nvalue become %d\n",n);
}
