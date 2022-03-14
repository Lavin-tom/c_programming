//wap to find the factors of the number

#include<stdio.h>
void factors(int n);
int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d",&n);

	factors(n);
}
void factors(int n)
{
	int i;
	printf("factors of %d :\n",n);
	//factors of a number is only half no 
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			printf("%d ",i);
	}
	//orginal no is also a factor
	printf("%d\n",n);
}
