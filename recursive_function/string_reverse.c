//wap to reverse the string using recursive concept
//using recursive concept 
//find the length of string and reversing the string

#include<stdio.h>
int string_length(char a[],int index);
void string_reverse(char [],int index, int length);
int main()
{
	char a[10];
	int length,index=0;
	printf("enter the string\n");
	scanf("%s",a);
	length=string_length(a,index);
	printf("length of string is %d\n",length);
	string_reverse(a,index,length-1);
	printf("after reversing the string %s\n",a);
}

//function body
//find the length of string using recursive concept 
int string_length(char a[],int index)
{
	static int count=0;
	if(a[index])
	{
		count++;
	string_length(a,index+1);
	}
	else
		return count;
}

//function for reversing the string 
void string_reverse(char a[],int index,int length)
{
	char temp;
	temp=a[index];
	a[index]=a[length-index];
	a[length-index]=temp;
	if(index==length/2)
	{
		return;
	}
	string_reverse(a,index+1,length);	
	}

