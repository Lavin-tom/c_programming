//wap to cancatenate two strings
#include<stdio.h>
#include<string.h>
int main()
{
	char string1[10],string2[10];
	int str1_length;
	printf("enter string1 and string2\n");
	scanf("%s %s",string1,string2);

	printf("before concatenate strings: %s\n",string1);
	str1_length=strlen(string1);
	for(int i=str1_length,j=0;j<str1_length;j++,i++)
	{
		string1[i]=string2[j];
	}

	printf("after concatenate string: %s\n",string1);
}
