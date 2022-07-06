//square root using subtraction method
#include<stdio.h>
int main()
{
	int n,i=1,count=0;
	printf("enter n\n");
	scanf("%d",&n);

	while(n>0)
	{
		count++;
		i=i+2;
		n=n-i;
	}
	printf("square root: %d\n",count);
}
