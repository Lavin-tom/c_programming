//wap to convert the input string into float
//using atof function
//command line argument/load time input

#include<stdio.h>
#include<stdlib.h>
//here we use predefined function atof for convert input string into float 
//add header file stdlib.h

int main(int argc,char *argv[])
{
	float res;
	//argument is always 2. a.out file is one argument,string is one argument 
	if(argc!=2)
	{
		printf("string is not entered along with a.out\n");
		return 0;
	}
	else
	{
		res=atof(argv[1]);
		printf("atoi value is : %f\n",res);	
	}
}
