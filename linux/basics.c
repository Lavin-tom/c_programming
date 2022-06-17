//add sub mul
#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int main()
{
	int a,b,res;
	printf("enter a value\n");
	scanf("%d",&a);
	printf("enter b value\n");
	scanf("%d",&b);
	res=add(a,b);
	printf("add:%d\n",res);
	res=sub(a,b);
	printf("sub:%d\n",res);
	res=mul(a,b);
	printf("mul:%d\n",res);
}
