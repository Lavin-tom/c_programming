//wap to find sub string or not
//without using predefined string functions
//command line arguments
//[wip]

#include<stdio.h>
#include<string.h>
#include<stdlib.h>		//to use exit function
int str_length(int n,char **argv[]);
int main(int argc,char *argv[])
{
	int str1_length=0,str2_length=0;
	if(argc!=3)
	{
		printf("must have two string\n");
		exit(0);
	}
	//printf("your strings: %s %s\n",argv[1],argv[2]);
	for(int i=0;argv[1][i];i++)
		str1_length++;
	for(int i=0;argv[2][i];i++)
		str2_length++;

	printf("%d %d\n",str1_length,str2_length);

	int r=strncmp(argv[1],argv[2],str1_length);
	printf("%d\n",r);
	if(r==0)
		printf("%s is the substring of %s\n",argv[1],argv[2]);
	else
		printf("%s is not a substring of %s\n",argv[1],argv[2]);
}
