//toggle and reset
#include<stdio.h>
int main()
{
	int n,bp;
	printf("enter number and bit position\n");
	scanf("%d %d",&n,&bp);
	for(int i=7;i>=0;i--)
		printf("%d",n>>i&1);
	n=n&~(1<<(bp-1));
	printf("\nafter reset and toggle\n");
	for(int i=7;i>=0;i--)
		printf("%d",n>>i&1);
	printf("\nnumber will be:%d\n",n);
}
