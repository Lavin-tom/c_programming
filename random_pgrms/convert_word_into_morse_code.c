//wap to convert word into morse code
//simple code using if else ladder

#include<stdio.h>
#include<stdlib.h>
void convert(char *);
void print(char *);
void morse_convertion(char *);
int main()
{
	char word[10];
	printf("enter word\n");
	scanf("%s",word);

	convert(word);
	print(word);
	morse_convertion(word);
}
//convert into uppercase
void convert(char * word)
{

	for(int i=0;word[i];i++)
	{
		if(word[i]>=97 && word[i]<=122)
			word[i]-=32;
		else if(word[i]>=65 && word[i]<=90 || word[i]>=48 && word[i]<=58)
		{
		}
		else
		{
			printf("invalid input\n");
			exit(0);
		}
	}
}

//printing string
void print(char *word)
{
	for(int i=0;word[i];i++)
		printf("%c ",word[i]);
	printf("\n");
}

//morse convertion
void morse_convertion(char *word)
{
	for(int i=0;word[i];i++)
	{
		if(word[i]==65) 	 //a
			printf(".-");
		else if(word[i]==66)     //b
			printf("-...");
		else if(word[i]==67)	 //c
			printf("-.-.");
		else if(word[i]==68)	//d
			printf("-..");
		else if(word[i]==69)	//e
			printf(".");
		else if(word[i]==70)	//f
			printf("..-.");
		else if(word[i]==71)	//g
			printf("--.");
		else if(word[i]==72)	//h
			printf("....");
		else if(word[i]==73)	//i
			printf("..");
		else if(word[i]==74)	//j
			printf(".---");
		else if(word[i]==75)	//k
			printf("-.-");
		else if(word[i]==76)	//l
			printf(".-..");
		else if(word[i]==77)	//m
			printf("--");
		else if(word[i]==78)	//n
			printf("-.");
		else if(word[i]==79)	//o
			printf("---");
		else if(word[i]==80)	//p
			printf(".--.");
		else if(word[i]==81)	//q
			printf("--.-");
		else if(word[i]==82)	//r
			printf(".-.");
		else if(word[i]==83)	//s
			printf("...");
		else if(word[i]==84)	//t
			printf("-");
		else if(word[i]==85)	//u
			printf("..-");
		else if(word[i]==86)	//v
			printf("...-");
		else if(word[i]==87)	//w
			printf(".--");	
		else if(word[i]==88)	//x
			printf("-..-");
		else if(word[i]==89)	//y
			printf("-.--");
		else if(word[i]==90)	//z
			printf("--..");
		else if(word[i]==48)	//0
			printf(".----");
		else if(word[i]==49)	//1
			printf("..---");
		else if(word[i]==50)	//2
			printf("...--");
		else if(word[i]==51)	//3
			printf("....-");
		else if(word[i]==52)	//4
			printf(".....");
		else if(word[i]==53)	//5
			printf("-....");
		else if(word[i]==54)	//6
			printf("--...");
		else if(word[i]==55)	//7
			printf("---..");
		else if(word[i]==56)	//8
			printf("----.");
		//else if(word[i]==57)	//9
		else
			printf("-----");
	}
	printf("\n");
}
