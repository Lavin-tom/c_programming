//swapping of two variale without using pointer concept
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);

	printf("Before swapping a:%d b:%d\n",a,b);
	swap(&a,&b);
}

void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	
	printf("After swapping a:%d b:%d\n",*a,*b);
}
