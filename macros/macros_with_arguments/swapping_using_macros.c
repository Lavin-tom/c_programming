//swapping of two integer using macros
//multiline macros

#include<stdio.h>
#define swap(a,b) int temp;\
	temp=a;\
	a=b;\
	b=temp
int main()
{
	int a,b;
	printf("enter the nos\n");
	scanf("%d %d",&a,&b);
	printf("nos before swapping a=%d b=%d\n",a,b);
	swap(a,b);
	printf("nos after swapping a=%d b=%d\n",a,b);
}
