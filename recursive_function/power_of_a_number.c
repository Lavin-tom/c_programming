//power of a no

#include<stdio.h>
int power(int,int);
int main()
{
	int a,n,res=0;
	printf("enter the digits\n");
	scanf("%d",&a);
	printf("enter power\n");
	scanf("%d",&n);

	res=power(a,n);
	printf("%d^%d: %d\n",a,n,res);
}

//recursive function
int power(int a,int n)
{
	static int pow=1;
	pow=pow*a;
	n=n-1;
	if(n==0)
		return pow;
	else
		power(a,n);
}
