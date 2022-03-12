//convert the string to upper case

#include<stdio.h>
//function declaration
void string_uppercase(char *string);
int main()
{
	char string[10];
	printf("enter the string\n");
	scanf("%s",string);

	//function call
	string_uppercase(string);
	printf("after converting to uppercase %s\n",string);
}

//function body 
void string_uppercase(char *string)
{
	int j;
		for(j=0;string[j];j++)
		{
			//if input character is already uppercase no need to convert
			//so check for input chara is lowercase with ascii value
			if(97<= string[j] && string[j] <= 122)

			//logic for converting to opposite case
			string[j]=string[j]^32;
		}
}

