//wap to find the string is palindrome or not
//without predefined funtions

#include<stdio.h>
int string_length(char *a);
int reverse_string (char *a,int length);
int main()
{
	char a[10];
	int length,result;
	printf("enter the string\n");
	scanf("%s",a);

	//function call
	length=string_length(a);
	result=reverse_string(a,length);
	if(result==1)
		printf("%s is a palindrome string\n",a);
	else
	printf("%s is not a palidrome string\n",a);  
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
//function for reverse the string 
int reverse_string(char *a,int length)
{
	int i,j;
	for(i=0,j=length-1;i<length/2;i++,j--)
	{	if(a[i]!=a[j])
		break;
	}
	if(i==length/2)
		return 1;
}
