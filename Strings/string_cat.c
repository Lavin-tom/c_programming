//wap to append the string two to the string one
//using predefind function and user defined functions
//using strrstr it gives starting address of substring 

#include<stdio.h>
//we use predefined functions of string so string.h header file is needed
#include<string.h>
int strlen_user(char *a);
void strcat_user(char *a,char *b,int lengthofa, int lengthofb);
int main()
{
	char a[10],b[10];
	int value,start,r,i,lengthofa,lengthofb;
	printf("enter the string a\n");
	scanf("%s",a);
	printf("enter the second string\n");
	scanf("%s",b);

	//predefined function for find the occurance of chara in a string
	strcat(a,b);
	printf("after append string a : %s\n",a);
	lengthofa=strlen_user(a);
	lengthofb=strlen_user(b);
	strcat_user(a,b,lengthofa,lengthofb);
	printf("after append using user %s\n",a);
}

//user function for find the length of string
int strlen_user(char *a)
{
	int i;
	for(i=0;a[i];i++);
	return i;
}

//user function for find the last occurance
void strcat_user(char *a,char *b,int lengthofa,int lengthofb)
{
	int i,count=0,j;

	//compare the value of a[i] to b[i] using a for loop
	for(i=lengthofa,j=0;a[j];i++,j++)
	{
		a[i]=b[j];
	}
}
