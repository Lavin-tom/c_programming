//convert the string to lower case

#include<stdio.h>
//function declaration
void string_lowercase(char *string);
int main()
{
	char string[10];
	printf("enter the string\n");
	scanf("%s",string);

	//function call
	string_lowercase(string);
	printf("after converting to lowercase %s\n",string);
}

//function body 
void string_lowercase(char *string)
{
	int j;
		for(j=0;string[j];j++)
		{
			//if input character is already uppercase no need to convert
			//so check for input chara is lowercase with ascii value

			if(65<= string[j] && string[j] <= 90)

			//logic for converting to opposite case
			string[j]=string[j]^32;
		}
}

