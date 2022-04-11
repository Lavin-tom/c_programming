//wap to find the no even or odd 
//using conditional operator/ternary operator
//(expression)?(execute if true):(execute if false);

#include<stdio.h>
int main()
{
	int a;
	printf("enter two number\n");
	scanf("%d",&a);

	(a%2==0)?(printf("%d is even\n",a)):(printf("%d is odd\n",a));
}
