//wap to print the binary equalent using char pointer

#include<stdio.h>
int main()
{
	float f;
	printf("enter the double value\n");
	scanf("%f",&f);

	char *p;
	p=&f;

	for(int j=3;j>=0;j--)
	{
		for(int i=sizeof(char)*8-1;i>=0;i--)
		{
			printf("%d",*(p+j)>>i&1);	
		}
	}
}
