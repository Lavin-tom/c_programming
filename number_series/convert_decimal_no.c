//wap to convert a no into 
//octal 
//hexadecimal
//binary

#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the no\n");
	scanf("%d",&n);

	//format specifier for hexadecimal is %x
	printf("equalent hexadecimal of %d is %x\n",n,n);
	//format specifier for octal is %o
	printf("equalent octal of %d is %o\n",n,n);
	printf("equalent binary of %d no is ",n);

	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\n");
}
