//user defined variable argument list
//count method

#include<stdio.h>
#include<stdarg.h>
int sum(int,...); 			//atleast one argument is fixed, Here int is fixed
int main()
{
	int i=10,j=20,k=30,res;
	res=sum(2,i,j);			//2 argument		 
	printf("sum=%d\n",res);
	res=sum(3,i,j,k);		//3 argument
	printf("sum=%d\n",res);
}

//function start

int sum(int n,...)			//n is the last fixed argument 
{
	int i,s=0,res=0;
	va_list v;
	va_start(v,n);
	for(i=0;i<n;i++)
	{
		res=va_arg(v,int);	//second argument is last fixed argument
		s=s+res;
	}
	va_end(v);
	return s;
}
