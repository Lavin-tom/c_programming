//strchr user defined function
//string index postion is start from 0

#include<stdio.h>
int main()
{
	char str[10],ch;
	printf("enter the string\n");
	scanf("%s",str);
	printf("enter the character\n");
	scanf(" %c",&ch);

	for(int i=0;str[i];i++)
	{
		if(ch==str[i])
		{
			printf("%c present in the string %s at index postion %d\n",ch,str,i);
			break;	
		}
	}
}
