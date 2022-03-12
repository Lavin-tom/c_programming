//remove special characters from the string

#include<stdio.h>
//function declaration
void string_checkforspl(char *string);
int main()
{
	char string[10];
	printf("enter the string\n");
	scanf("%s",string);

	//function call
	string_checkforspl(string);
	printf("%s\n",string);
}

//function body 
void string_checkforspl(char *string)
{
	int j,i;
		for(j=0;string[j];j++)
		{
			//check for input chara is a alphabet
			//but we need special character so else part is needed
			if((string[j] >= 97 && string[j]<= 122) || (string[j]>=90 && string[j]<=65));
			else
			{
				for(i=j;string[i];i++)
				string[i]=string[i+1];
				j--;
			}

		}	
}
