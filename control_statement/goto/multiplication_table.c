//multiplication table by goto
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter n\n");
	scanf("%d",&n);

mul:
	printf("%d * %d = %d\n",i,n,i*n);
	i++;

	if(i<=10)
		goto mul;
}
