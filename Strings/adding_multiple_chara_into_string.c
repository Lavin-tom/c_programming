//wap to insert multiple character to the string 
//without predefined funtions
#include<stdio.h>
int string_length(char *a);
void add_chara(char *a,char ch,int length);
int main()
{
	char a[10],ch1,ch2;
	int length;
	printf("enter the string\n");
	scanf("%s",a);
	printf("enter the characters to be add\n");
	scanf(" %c %c",&ch1,&ch2);

	//function call
	length=string_length(a);
	add_chara(a,ch1,length);
	length=string_length(a);
	add_chara(a,ch2,length);
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
