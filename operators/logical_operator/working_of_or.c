//logical operator
//OR operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);
	printf("a:%d b:%d\n",a,b);
	if(a||(b=200))
		printf("value of b remain same %d until a value is zero\n",b);
	else
		printf("else works only when values of both a and b are zero\n");
}

