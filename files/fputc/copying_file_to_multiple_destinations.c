//copying the file to multiple destinations at the same time
//command line arguments
//one source file and atlest one destination file required 
//./a.out temp temp2 temp3 temp4 ....

#include<stdio.h>
int main(int argc,char* argv[])
{
	char ch;
	if(argc<3){
		printf("must have a.out, source-file and atleast one destination file\n");
		return 0;}
	FILE *fp1,*fp2;
	fp1=fopen(argv[1],"r");
		if(fp1==0){
			printf("source file not opened\n");
			return 0;}
	for(int i=2;i<argc;i++)
	{
		fp2=fopen(argv[i],"w");
		if(fp2==0){
			printf("destination file not opened\n");
			return 0;}
		else
			printf("destination file opened\n");

		while((ch=fgetc(fp1))!=EOF)
			fputc(ch,fp2);
		rewind(fp1);				//for file pointer point again to the begining of the file
							//from begining copying the content to new destination

	}
}
