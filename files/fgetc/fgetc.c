//fgetc()
//get character from the file
//get data from another file 
//command line argument method used
//data BANGLORE is fetch from file location 
//command line should be ./a.out location

#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char ch;
	if(argc!=2)
		printf("must have 2 argument of a.out and file name\n");
	else
	{
		fp=fopen(argv[1],"r");
		if(fp==0)
			printf("file not opened\n");
		else
			printf("file opened\n");

		while((ch=fgetc(fp))!=-1)	//printing character by character,last character is EOF
		{				//EOF- End of file it return -1	
		printf("%c",ch);		//while loop repeat until it reaches EOF/-1
		}
	}
}
