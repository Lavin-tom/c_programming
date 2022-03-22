//wap to convert the input string into integer 
//using atoi funtion
//command line argument/load time input

#include<stdio.h>
#include<stdlib.h>
//here we use predefined function atoi for convert input string into integer 
//add header file stdlib.h

int main(int argc,char *argv[])
{
	int res;
	//argument is always 2. a.out file is one argument,string is one argument 
	if(argc!=2)
	{
		printf("string is not entered along with a.out\n");
		return 0;
	}
	else
	{
		res=atoi(argv[1]);
		printf("atoi value is : %d\n",res);	
	}
}
