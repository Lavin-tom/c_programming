//wap to replace vowels from a string to -
#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	int str_length;
	printf("enter string\n");
	scanf("%s",string);

	str_length=strlen(string);
	printf("Before replace: %s\n",string);
	for(int i=0;i<str_length;i++)
	{
		if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
		{
			string[i]='-';
		}
	}

	printf("after replace: %s\n",string);
}
