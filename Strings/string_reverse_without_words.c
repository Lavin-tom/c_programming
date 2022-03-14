//wap to reverse the string
//without any predefined function of strings
//input - i.love.india
//output - india.love.i
//------------------------------

#include<stdio.h>
int string_length(char *string);
void string_reverse(char *string,int length);
void string_char(char *string,int i,int fullstop);
int main()
{
	int length,i,fullstop=0;
	char string[20];
	printf("enter the string\n");
	scanf("%s",string);
	
	length = string_length(string);
	string_reverse(string,length);
	
	for(i=0;i<=length;i++)
	{
		//check for . and null value
		if((string[i]=='.') || (string[i]=='\0'))
			{
			string_char(string,i,fullstop);
			fullstop=0;
			}
		else
			fullstop++;
	}

	//after all revese print the final string
	printf("%s\n",string);
}

//function body to find the length of the string
int string_length(char *string)
{
	int i;
	for(i=0;string[i];i++);
	return i;
}
//function body or reverse entire string 
void string_reverse(char *string,int length)
{
	int i,j;
	char temp;
	for(i=0,j=length-1;i<=(length-1)/2;j--,i++)
		{
			temp=string[i];
			string[i]=string[j];
			string[j]=temp;
		}
}
//function body of reverse the string 
void string_char(char *string,int i,int fullstop)
{
	int k,j,count=0;
	char temp;
	for(k=i-fullstop,j=i-1;count<fullstop/2;k++,j--)
		{
			temp=string[k];
			string[k]=string[j];
			string[j]=temp;
			count++;
		}
}
