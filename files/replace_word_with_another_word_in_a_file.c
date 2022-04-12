//wap to replace a word in a file to another word
//command line argument
//./a.out filename word1 word2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int file_size=0,i=0;
	char ch,*stop;
	if(argc!=4)
	{
		printf("must have ./a.out filename word1 word2\n");
		return 0;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	while((ch=fgetc(fp))!=EOF)
		file_size++;			//file size

	//dynamic memory allocation 
	char *buf=(char *) malloc((file_size+1)*sizeof(char));

	//point to starting of file
	rewind(fp);

	//copying the data to a dma 
	while((ch=fgetc(fp))!=EOF)
		buf[i++]=ch;
		buf[i]='\0';
		fclose(fp);

	//open file in write mode. already existing files truncated. because of write mode
	fp=fopen(argv[1],"w");

	//checking for presence of multiple words
	i=0;
	while((stop=strstr(buf+i,argv[2]))!=NULL)
	{
		for(int j=stop-buf;i<j;i++)
			fputc(buf[i],fp);

		fputs(argv[3],fp);		//copying the word to file
		i=i+strlen(argv[2]);
	}

	//adding remaining words to the file
	for(;buf[i];i++)
	fputc(buf[i],fp);
	fclose(fp);	
}
