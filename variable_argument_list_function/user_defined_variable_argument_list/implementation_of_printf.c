//implementation of printf
//user defined variable argument list

#include<stdio.h>
#include<stdarg.h>
void user_print(char *n,...);
int main()
{
	int i=10;
	char ch='a';
	float f=20.5;

	printf("i=%d ch=%c f=%f\n",i,ch,f);		//to print from printf function 
	user_print("i=%d ch=%c f=%f\n",i,ch,f); 	//user defined printf function
}

void user_print(char *n,...)
{
	int x,i;
	int y;
	double z;
	va_list v;
	va_start(v,n);

	for(i=0;n[i];i++)
	{
		if(n[i]=='%')				//check for format specifier
		{
			i++;
			if(n[i]=='d')
			{
				x=va_arg(v,int);
				printf("%d",x);
			}
			if(n[i]=='c')
			{
				//y=va_arg(v,char);
				y=va_arg(v,int);	//for avoid warning char is promoted to int 
				printf("%c",y);
			}
			if(n[i]=='f')
			{
				//z=va_arg(v,float);
				z=va_arg(v,double);	//for avoid warning float is promoted to double
				printf("%f",z);
			}
		}
		else					//for rest of the characters print as same
			printf("%c",n[i]);
	}
}
