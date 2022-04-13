//fscanf
//read word by word from the file
//for read word by word from file, fscanf()is the best choice

#include<stdio.h>
int main()
{
	char str[15];
	FILE *fp;
	fp=fopen("temp","w+");		//both read and write possible
		if(fp==NULL)
		{
			printf("file not opened\n");
			return 0;
		}
	fprintf(fp,"happy_coding\n",str);	//adding string into file
	rewind(fp);
	fscanf(fp,"%s",str);		//fetch the string from file
	printf("%s\n",str);		//for varify print string using printf
	fclose(fp);
}
