//strcasecmp
//compare two strings ignore case
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("a.out and two strings required\n");
		exit(0);
	}
	int r=strcasecmp(argv[1],argv[2]);
	if(r==0)
		printf("%s and %s are same\n",argv[1],argv[2]);
	else
		printf("%s and %s are not same\n",argv[1],argv[2]);
}
