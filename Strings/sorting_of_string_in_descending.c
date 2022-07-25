//sorting of string in descending order
#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	int str_length;
	printf("enter string\n");
	scanf("%s",string);
	str_length=strlen(string);

	for(int i=122;i>=97;i--)
	{
		for(int j=0;j<str_length;j++)
		{
			if(i==string[j])
				printf("%c",string[j]);
		}
	}
	printf("\n");
}
