//fopen()
//to create a file 
//method 2 - using string
//FILE *fopen (const char *path,const char *mode)
//return file pointer if not found it return NULL

#include<stdio.h>
int main()
{
	FILE *fp;
	//fp=fopen(a,"r"); //data is new file name, r for read the file
	char a[10];
	printf("enter the file name\n");
	scanf("%s",a);
	fp=fopen(a,"w"); //write mode, if file is already there it truncated,if not found it create new file
	if(fp==0)
		printf("file not found\n");
	else
		printf("file opened\n");
}
