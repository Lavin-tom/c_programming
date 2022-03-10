//wap to reverse the string 
//without predefined funtions
#include<stdio.h>
int string_length(char *a);
void reverse_string (char *a,int length);
int main()
{
	char a[10],ch1,ch2;
	int length;
	printf("enter the string\n");
	scanf("%s",a);

	//function call
	length=string_length(a);
	reverse_string(a,length);
	printf("after reverse the string will be %s\n",a);  
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
//function for reverese the string 
void reverse_string(char *a,int length)
{
	int i,j;
	char temp;
	for(i=0,j=length-1;i<length/2;i++,j--)
	{	temp=a[i];
		a[i]=a[j];
		a[j]=temp;	
	}
}
