//wap to insert character to the string
//without predefined funtions
#include<stdio.h>
int string_length(char *a);
void add_chara(char *a,char ch,int length);
int main()
{
	char a[10],ch;
	int length;
	printf("enter the string\n");
	scanf("%s",a);
	printf("enter the character to add\n");
	scanf(" %c",&ch);

	//function call
	length=string_length(a);
	add_chara(a,ch,length);
	printf("after adding char to the string will be  %s\n",a);  
}
//funtion body
//user defined function to find string length
int string_length (char *a)
{
	int i;
	//dummy for loop for get the string length
	for(i=0;a[i];i++);
	return i;
}
//function for add chara at end end 
add_chara(char *a,char ch,int length)
{
	a[length]=ch;
	a[length+1]='\0';
}
