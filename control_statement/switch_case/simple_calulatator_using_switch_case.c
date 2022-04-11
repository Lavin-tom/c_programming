//wap to simple calculator using switch case

#include<stdio.h>
int main()
{
	int a,b,o;
	printf("enter the no\n");
	scanf("%d %d",&a,&b);

	printf("select any option\n");
	printf("1.add\n");
	printf("2.sub\n");
	printf("3.mul\n");
	printf("4.div\n");
	scanf("%d",&o);
	switch (o)
	{
		case 1: printf("sum: %d\n",a+b);
			break;
		case 2: printf("sub: %d\n",a-b);
			break;
		case 3: printf("mul: %d\n",a*b);
			break;
		case 4: printf("div: %d\n",a/b);
	}
}
