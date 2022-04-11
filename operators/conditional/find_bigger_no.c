//wap to find the bigger no 
//using conditional operator/ternary operator
//(expression)?(execute if true):(execute if false);

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers..\n");
	scanf("%d %d",&a,&b);

	(a>b)?(printf("%d is big\n",a)):(printf("%d is big\n",b));
}
