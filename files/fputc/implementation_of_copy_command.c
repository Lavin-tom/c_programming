//implementation of copy command
//command line arguments
//temp as source file and temp2 file as destination.
//cmd line should be ./a.out temp temp2 

#include<stdio.h>
int main(int argc,char *argv[])
	{
		char ch;
		if(argc!=3){
			printf("must have ./a.out source-file destination-file\n");
			return 0;}
		else
		{
			FILE *fp1,*fp2;
			fp1=fopen(argv[1],"r");
			if(fp1==0){
				printf("source file not opened\n");
				return 0;}
			else
				printf("source file opened\n");
			fp2=fopen(argv[2],"w");
			if(fp2==0){
				printf("destination file not opened\n");
				return 0;}
			else
				printf("destination file opened\n");
			while((ch=fgetc(fp1))!=EOF)			//copying the content util it reaches EOF(-1)
				fputc(ch,fp2);
		}
	}
