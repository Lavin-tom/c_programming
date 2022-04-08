//fputc 
//add a character into the file
//using command line argument 

#include<stdio.h>
int main(int argc,char * argv[])
{
	char ch;
	if(argc!=2){
		printf("must have ./a.out and file name\n");
		return 0; }
	if(argc==2)
	{
	FILE *fp;
	int ret;
	fp=fopen(argv[1],"w");
	if(fp==0)
		printf("file not opened..\n");
	else
		printf("file opened or created...\n");
	printf("enter the character to write into the file...\n");
	scanf("%c",&ch);
	ret=fputc(ch,fp);
	if(ret==-1)
		printf("writing into file failed..\n");
	else
		printf("writing into file sucess...\n");
	}
}
