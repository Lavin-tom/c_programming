//strcpy using recursion

#include<stdio.h>
int str_length(char a[],int index);
void str_copy(char a[],char b[],int index,int length);
int main()
{
	char a[10],b[10];
	int index=0;
	printf("enter the string\n");
	scanf("%s",a);
	int length=str_length(a,index);
	printf("string length :%d\n",length);
	str_copy(a,b,index,length);
	printf("after copying string b: %s\n",b);

}
int str_length(char a[],int index)
{
	static int count=0;
	if(a[index])
	{
		count++;
		str_length(a,index+1);
	}
	else
		return count;
}

void str_copy(char a[],char b[],int index,int length)
{
	if(index!=length)
	{
	b[index]=a[index];
	str_copy(a,b,index+1,length);
	}
	else
		b[index]='\0';

}
