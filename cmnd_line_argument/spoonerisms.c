//spoonerisms
//A spoonerism is when the first letters / sounds of two words are transposed onto one another.
//Create a function that takes a two-word string and performs a spoonerism on the phrase.
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=3){
		printf("Need two string to perform spoonerism\n");
		exit(0);
	}
	printf("%s\n",argv[1]);
	printf("%s\n",argv[2]);

	char temp = argv[1][0];
	argv[1][0]=argv[2][0];
	argv[2][0]=temp;

	printf("%s\n",argv[1]);
	printf("%s\n",argv[2]);
}
