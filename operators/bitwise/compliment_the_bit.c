//wap to complement the bit
//set means compliment the bit position value. 0 to 1 or 1 to 0.
//example - 10 0000 1010 bp=0 after set the bit= 0000 1011 value become 11

#include<stdio.h>
int main()
{
	int n,bp;
	printf("enter the no\n");
	scanf("%d",&n);
	
	printf("enter the bit position to compliment the bit\n");
	scanf("%d",&bp);

	printf("before complement the bit\n");
	for(int i=7;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\nafter complement the bit\n");
	n=n^(1<<bp);
	for(int i=7;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\nvalue become %d\n",n);
}
