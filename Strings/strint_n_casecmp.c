//strncasecmp
//compare two strings upto n ignore case
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[],int n)
{
	if(argc!=4)
	{
		printf("a.out, two strings and n value required\n");
		exit(0);
	}
	int r=strncasecmp(argv[1],argv[2],n);
	printf("%d \n",r);
	if(r==0)
		printf("%s and %s are same\n",argv[1],argv[2]);
	else
		printf("%s and %s are not same\n",argv[1],argv[2]);
}
