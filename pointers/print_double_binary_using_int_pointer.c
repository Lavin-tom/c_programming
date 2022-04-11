//wap to print the binary equalent of double using integer pointer

#include<stdio.h>
int main()
{
	double d;
	printf("enter the double value\n");
	scanf("%lf",d);

	int *p;
	p=&d;

	for(int j=1;j>=0;j--)
	{
		for(int i=sizeof(int)*8-1;i>=0;i--)
		{
			printf("%d",*(p+j)>>i&1);		//p+1 1000+4 1004
		}
	}
}
