//user defined variable argument list 
//null method

#include<stdio.h>
#include<stdarg.h>
int sum(char *,...);
int main()
{
	int i=10,j=20,k=30,res;
	res=sum("hello",i,j,0);
	printf("sum=%d\n",res);
	res=sum("hai",i,j,k,0);
	printf("sum=%d\n",res);
}

//function start
int sum(char *n,...)		//string is last fixed argument
{
	int s=0,res;
	va_list v;
	va_start(v,n);
	for(;;)
	{
	res=va_arg(v,int);
	if(res==0) 		//for loop repeat until reaches null
		break;
	s=s+res;		
	}
	va_end(v);
	return s;		//return sum
}
