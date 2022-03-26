//string right rotation 
//right rotate by n times 

#include<stdio.h>
#include<string.h>
int main()
{
	char string[10],string_temp[10];
	printf("enter the string\n");
	scanf("%s",string);
	int i,j,r,l;
	printf("enter value for left rotation\n");
	scanf("%d",&r);

	//to find string length
	//predefined function for find length of string
	
	l=strlen(string);

	//rotation of strings according to left shift value 
	for(i=0,j=r;i<l-r;i++,j++)
	{
		string_temp[i]=string[j];
	}
	for(i=l-r,j=0;j<r;i++,j++)
	{
		string_temp[i]=string[j];
	}
	//every string end with '\0'
	string_temp[l]='\0';

	//printing the final string
	printf("%s\n",string_temp);
}
