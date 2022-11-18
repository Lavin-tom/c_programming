//swapping of two variale without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);

	printf("Before swapping a:%d b:%d\n",a,b);

	//swapping
	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping a:%d b:%d\n",a,b);
}
