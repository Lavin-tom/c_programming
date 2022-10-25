//avg of three using multiple file compilation
#include<stdio.h>
#include "average.h"
int main()
{
	int a,b,c,avg;
	printf("enter three digits\n");
	scanf("%d %d %d",&a,&b,&c);
	
	avg=average(a,b,c);

	printf("avg of %d %d %d is %d\n",a,b,c,avg);
}
