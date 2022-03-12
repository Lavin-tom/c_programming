//arrange the string to alternate lower and upper case

#include<stdio.h>
//function declaration
void string_altercase(char *string);
void string_uppercase(char *string);
int main()
{
	char string[20];
	printf("enter the string\n");
	scanf("%s",string);

	//function call
	string_uppercase(string);
	string_altercase(string);
	printf("%s\n",string);
}

//function body 
void string_uppercase(char *string)
{
	int j;
		for(j=0;string[j];j++)
		{
			//convert the string into upper case
			//so check for input chara is lowercase with ascii value

			if(97<= string[j] && string[j] <= 122)

			//logic for converting to uppercase
			string[j]=string[j]^32;
		}
}
//function body
//convert alternate letter to opposite case
void string_altercase(char *string)
{
	int i;
	//loops start from second index position 
	//we need alternate character to be convert so i increment by 2
	for(i=1;string[i];i=i+2)
		string[i]=string[i]^32;
}
