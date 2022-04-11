//wap to done basic math operations using goto concept

#include<stdio.h>
int main()
{
	int a,b,o;
	printf("enter numbers\n");
	scanf("%d %d",&a,&b);

	printf("select any option\n");
	printf("1. %d + %d \n2. %d - %d\n3. %d * %d\n4. %d / %d\n",a,b,a,b,a,b,a,b);
	scanf("%d",&o);

	if(o==1)
		goto add;
	else if(o==2)
		goto sub;
	else if(o==3)
		goto mul;
	else if(o==4)
		goto div;
	else
		printf("invalid option\n");
	return 0;
add: printf("%d + %d = %d",a,b,a+b);
     return 0;
sub: printf("%d - %d = %d",a,b,a-b);
     return 0;
mul: printf("%d * %d = %d",a,b,a*b);
     return 0;
div: printf("%d / %d = %d",a,b,a/b);
     return 0;
    
}
