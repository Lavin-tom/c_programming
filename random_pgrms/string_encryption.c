//string encryption
//simple string encryption using ascii
#include<stdio.h>
#include<string.h>
int main()
{
	char word[10];
	int code;
	printf("enter string\n");
	scanf("%s",word);

	printf("enter encryption code\n");
	scanf("%d",&code);

	printf("encrypted string: ");
	for(int i=0;i<strlen(word);i++)
	{
		printf("%c",word[i]+code);		//adding code value to each character
		code+=1;				//code value increment with each alphabet
	}

	printf("\n");
}
