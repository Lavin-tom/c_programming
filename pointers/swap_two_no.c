//swap two numbers using pointers

#include<stdio.h>
void swap_no(int *a,int *b);
int main()
{
	int a,b;
	printf("enter the no\n");
	scanf("%d %d",&a,&b);

	printf("no before swapping a:%d b:%d\n",a,b);
	swap_no(&a,&b);
	printf("no after swapping a:%d b:%d\n",a,b);
}

void swap_no(int *a,int *b)
{
	//normal swap logic using temp variable
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
