//left shift of string 

#include<stdio.h>
#include<string.h>
int main()
{
	char string1[5][10],string2[5][10];
	int i,j;
	for(i=0;i<5;i++)
		{
			scanf("%s[^\n]",string1[i]);
		}
	for(i=1,j=0;i<5;i++,j++)
	{
		strcpy(string2[j],string1[i]);
	}
	for(i=0,j=5-1;i<5;i++,j++)
	{
		strcpy(string2[j],string1[i]);
	}
	printf("\nafter copying string one to string two\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",string2[i]);
	}
	return 0;
}

