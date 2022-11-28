//wap to swap two variable without temp variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);

	printf("a:%d b:%d\n",a,b);
	//swapping variable
	a=a*b/(b=a);
	printf("a:%d b:%d\n",a,b);
}
