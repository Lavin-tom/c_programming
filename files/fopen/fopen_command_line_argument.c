//fopen()
//create a file
//Method 3 - using command line argument

#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	if(argc != 2)
	{
		printf("must have two argument of a.out and filename\n");
		return 0;
	}
	else
	{
	//fp=fopen(argv[1],"r");
	fp=fopen(argv[1],"w");

	if(fp==0)
		printf("file not found\n");
	else
		printf("file opened\n");
	}
}
