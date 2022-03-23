#include<stdio.h>
int basic_calc(int a,int b,int *sum,int *dif,int *pro,int *div,int *rem);
int a,b,sum,pro,dif,rem,div;
int main()
{
	printf("enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	
	int sum,dif,pro,quo,rem;
	basic_calc(a,b,&sum,&dif,&pro,&div,&rem);

	printf("sum of %d and %d is %d\n",a,b,sum);
	printf("product of %d and %d is %d\n",a,b,pro);
	printf("difference b/w %d and %d is %d\n",a,b,dif);
	printf("quotient of %d and %d is %d\n",a,b,div);
	printf("remainder of %d and %d is %d\n",a,b,rem);
}


