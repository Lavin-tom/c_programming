//wap to print the binary equalent of double using char pointer

#include<stdio.h>
int main()
{
	double d;
	printf("enter the double value\n");
	scanf("%lf",&d);

	char *p;
	p=&d;

	//double 8 bytes char 1 byte
	
	for(int j=7;j>=0;j--)
	{
		for(int i=sizeof(char)*8-1;i>=0;i--)
		{
			printf("%d",*(p+j)>>i&1);	
		}
	}
}
