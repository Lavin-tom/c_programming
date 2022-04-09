//replace a character in the file with another character.
//command line argument
//must have ./a.out filename char1 char2
//char1 in file is replaced with char2 after the execution

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int file_size=0,i=0;
	char ch,*p;
	if(argc!=4){
		printf("must have ./a.out filename char1 char2\n");
		return 0;}
	FILE *fp,*fp2;
	fp=fopen(argv[1],"r");
	//fp=fopen(argv[1],"r+");			//also possible, read and write possible with a+
	if(fp==0){
		printf("file not opened\n");
		return 0;}

	while((ch=fgetc(fp))!=EOF)			//to find the size of the file
		file_size++;
	printf("file size: %d\n",file_size);
	rewind(fp);					//to point from begin

	p=(char*)malloc(file_size);			//dma according to file_size
	while((ch=fgetc(fp))!=EOF)
		p[i++]=ch;
		p[i]='\0';
	printf("string are: %s\n",p);			//print string for varify copied or not

	for(int i=0;p[i];i++)				//comparison of character if equal replace with another
	{
		if(p[i]==argv[2][0])
			p[i]=argv[3][0];
	}
	printf("string after replace chara: %s\n",p);
	fclose(fp);
	fp2=fopen(argv[1],"w");
	for(int i=0;p[i];i++)				//copying the new dma string to the file
		fputc(p[i],fp2);
	fclose(fp2);
}
