//wap of simple calcular without if else ladder or switch case 
//using function pointer

#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
	int a,b,op,res;
	int (*ptr[4])(int,int);
	ptr[0]=add;
	ptr[1]=sub;
	ptr[2]=mul;
	ptr[3]=div;

	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	
	printf("select any option\n");
	printf("1.Add 2.Sub 3.Mul 4.Div\n");
	scanf("%d",&op);

	if(op>=1 && op<=4)
	{
		res=(*ptr[op-1])(a,b);
		printf("result: %d\n",res);
	}
	else
		printf("invalid option\n");
}

int add(int a,int b)
{
	return(a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int mul(int a,int b)
{
	return (a*b);
}
int div(int a,int b)
{
	return (a/b);
}

