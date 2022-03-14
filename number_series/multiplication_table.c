//wap to print the multiplicaition table of given no
#include<stdio.h>
void multiplication(int n);
int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d",&n);

	printf("multiplication table of %d\n",n);
	multiplication(n);
}
void multiplication(int n)
{
	int i=1,product;
	while(i<=10)
	{
	product=i*n;
	printf("%d * %d = %d\n",i,n,product);
	i++;
	}
}
