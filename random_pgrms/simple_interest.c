//simple interest
#include<stdio.h>
int main()
{
	int p,r,t;
	printf("enter principle amount, rate of interest, time\n");
	scanf("%d %d %d",&p,&r,&t);
	int SI=(p*r*t)/100;
	printf("simple interest: %d\n",SI);
}
