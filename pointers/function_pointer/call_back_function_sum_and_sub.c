//sum and differance of two number using function pointer

#include<stdio.h>
int add(int,int);
int sub(int,int);
int main()
{
	int a,b,res,op;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);

	printf("enter any option\n");
	printf("1.sum 2.sub\n");
	scanf("%d",&op);

	if(op==1)
	{
		res=fun(add,a,b);
		printf("res: %d\n",res);
	}
	else if(op==2)
	{
		res=fun(sub,a,b);
		printf("res: %d\n",res);
	}
	else
		printf("invalid option\n");
}

//function body maybe in same file or another file 
//multiple file complilation also possible.

int fun(int (*ptr) (int,int),int a, int b)
{
	int res;
	res=(*ptr)(a,b);
}

//function for addition
int add(int a,int b)
{
	return (a+b);
}

//function for sub
int sub(int a,int b)
{
	return (a-b);
}
