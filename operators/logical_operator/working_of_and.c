//logical operator
//AND operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);
	printf("a:%d b:%d\n",a,b);
	if(a&&(b=200))
		printf("value of b updated to %d because AND looking for second input too\n",b);
	else
		printf("value of a is zero\n");
}

