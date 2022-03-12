//arrange the chacter of a string in a downward format

#include<stdio.h>
//function declaration
void string_arrange(char *string);
int main()
{
	char string[10];
	printf("enter the string\n");
	scanf("%s",string);

	//function call
	string_arrange(string);
}

//function body 
void string_arrange(char *string)
{
	int i,j,k=0;
	char string2[10];

	//compare with ascii value 
	//a-z ascii value is from 122 - 97
	for(i=122;i>=97;i--)
	{
		for(j=0;string[j];j++)
		{
			if(string[j]==i)
			{
				string2[k]=string[j];
				k++;
			}
		}
	}
	string2[j]='\0';
	printf("after arranging the character %s\n",string2);
}

