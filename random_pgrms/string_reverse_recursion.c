//recursive function
#include<stdio.h>
#include<string.h>
int str_length(char a[],int index);
void string_reverse(char a[],int index,int length);
int main()
{
	char a[10];
	int length,index=0;
	printf("enter the string\n");
	scanf("%s",a);
	length=str_length(a,index);
	printf("length of string %d\n",length);
	string_reverse(a,index,length-1);
	printf("after reverse the string %s\n",a);
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

void string_reverse(char a[],int index,int length)
{
	char temp;
	temp=a[index];
	a[index]=a[length-index];
	a[length-index]=temp;
	if(index==length/2)
	{
		return ;
	}
	else
		string_reverse(a,index+1,length);
}
