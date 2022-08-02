//change every underscore with given character
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],b;
	int str_len;

	printf("enter string\n");
	scanf("%s",str);

	str_len=strlen(str);

	printf("enter character to change with space\n");
	scanf(" %c",&b);
	
	for(int i=0;i<str_len;i++)
	{
		if(str[i]=='_')
			str[i]=b;
	}

	printf("%s\n",str);
}
