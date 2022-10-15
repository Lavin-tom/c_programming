//wap to check the string is sub string or not
//command line argument
//using pre defined function strstr 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argc != 3)
	{
		printf("argc count should be 3\n");
		exit(0);
	}
	int r=strstr(argv[1],argv[2]);	//if substring is found it return zero 
	if(r==0)
		printf("%s is the sub string of %s\n",argv[1],argv[2]);
	else
		printf("%s is not a sub string of %s\n",argv[1],argv[2]);
	
}
