//user defined function for atof 
//convert command line argument string into float 


#include<stdio.h>
#include<stdlib.h>

float a2f(char*);	//function declaration 
main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("./a.out arg1\n");
		return;
	}
	float res;
	res=a2f(argv[1]); //fuction call
	printf("%f\n",res);
}

//function body
float a2f(char *p)
{
	int sum1=0,i=0;
	float sum2=0,f=0.1;


	if( (p[0]=='-') || (p[0]=='+') )
		i=1;

	for( ;p[i]!='\0';i++)
	{
		if( (p[i]>='0') && (p[i]<='9'))
			sum1=sum1*10+p[i]-48;
		else
			break;
	}
	for(i=i+1;p[i];i++,f=f*0.1)
	{
		if( (p[i]>='0') && (p[i]<='9'))
			sum2=sum2+f*(p[i]-48);
	}
	if(p[0]=='-')
		return -(sum1+sum2);
	else
		return (sum1+sum2);
}
