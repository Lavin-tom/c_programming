//sum of integers in string
#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	printf("enter integers\n");
	scanf("%s",string);

	int str_length,sum=0;
	str_length=strlen(string);

	for(int i=0;i<str_length;i++)
	{
		//to convert ascii value to integer 
		sum=sum+(string[i]-48);
	}
	printf("sum :%d\n",sum);
}
