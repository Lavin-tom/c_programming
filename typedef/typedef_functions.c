//typedef with functions

#include<stdio.h>
typedef int calc(int,int);
calc add,sub,mul,div;

int main()
	{
		int a,b;
		printf("enter the nos\n");
		scanf("%d %d",&a,&b);

		printf("sum :%d\n",add(a,b));
		printf("dif :%d\n",sub(a,b));
		printf("pro :%d\n",mul(a,b));
		printf("div :%d\n",div(a,b));
	}

		int add (int a,int b)
		{
			return a+b;
		}
		int sub(int a,int b)
		{
			return a-b;
		}
		int mul(int a,int b)
		{
			return a*b;
		}
		int div(int a,int b)
		{
			return a/b;
		}
