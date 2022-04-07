//fopen()
//to create a file 
//method 1
//FILE *fopen (const char *path,const char *mode)
//return file pointer if not found it return NULL

#include<stdio.h>
int main()
{
	FILE *fp;
	//fp=fopen("data","r"); //data is new file name, r for read the file
	fp=fopen("data","w"); //write mode, if file is already there it truncated,if not found it create new file
	if(fp==0)
		printf("file not found\n");
	else
		printf("file opened\n");
}
