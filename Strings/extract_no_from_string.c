//extract no from the string

#include<stdio.h>
//function declaration
void string_extract(char *string);
int main()
{
	char string[10];
	printf("enter the string\n");
	scanf("%s",string);

	//function call
	string_extract(string);
	printf("%s\n",string);
}

//function body 
void string_extract(char *string)
{
	int j,i=0;
		for(j=0;string[j];j++)
		{
			//extract only integer so check for correspoding value
			//ascii of 0 is 48 and 9 is 57
			if(string[j] >=48 && string[j]<=57)
			{
				string[i]=string[j];
				i++;
			}

		}	
		string[i]='\0';
}
