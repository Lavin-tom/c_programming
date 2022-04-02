//addition of int and float using macros
//macros with arguments

#include<stdio.h>
#define sum(a,b) a+b

int main()
	{
		int a,b,c;
		float x,y,z;
		printf("enter the no\n");
		scanf("%d %d",&a,&b);
		printf("enter float no\n");
		scanf("%f %f",&x,&y);	
		c=sum(a,b);
		z=sum(x,y);
		printf("sum is %d\n",c);
		printf("sum of float no is %.2f\n",z);

	}
