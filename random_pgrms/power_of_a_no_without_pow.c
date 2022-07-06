//wap to find the power of a number without using pow function
#include<stdio.h>
int main()
{
	int a,b,i=0,pow=1;
	printf("enter integer\n");
	scanf("%d",&a);
	printf("enter power\n");
	scanf("%d",&b);

	while(i<b)
	{
		pow=pow*a;
		i++;
	}
	printf("%d ^ %d : %d\n",a,b,pow);
}
