//wap to find the no is power of two or not
#include<stdio.h>
int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d",&n);

	if((n&n-1)==0)
		printf("%d is power of two\n",n);
	else
		printf("%d is not power of two\n",n);
}
