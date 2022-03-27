//copying one string into another

#include<stdio.h>
#include<string.h>
int main()
{
	char string1[5][10],string2[5][10];
	int i;
	for(i=0;i<5;i++)
		{
			scanf("%s[^\n]",string1[i]);
		}
	for(i=0;i<5;i++)
	{
		strcpy(string2[i],string1[i]);
	}
	printf("after copying string one to string two\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",string2[i]);
	}
}
