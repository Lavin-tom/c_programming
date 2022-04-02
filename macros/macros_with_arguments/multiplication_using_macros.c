//multiplication using macros

#include<stdio.h>
#define mul(a,b) a*b

int main()
{
	int a,b;
	printf("enter the nos\n");
	scanf("%d %d",&a,&b);

	int c=mul(a,b);
	printf("product is %d\n",c);
}
