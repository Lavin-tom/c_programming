//arrange the chacter of a string in a upward format

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
	
	//checking with ascii value 
	//a -z value range from 97 to 122
	for(i=97;i<=122;i++)
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

