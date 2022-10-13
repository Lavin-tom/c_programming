//digit frequency
//print the occurance of integer in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	int count=0;
	printf("enter string\n");
	scanf("%s",string);

	for(int j=48;j<58;j++)
	{
		for(int i=0;i<strlen(string);i++)
		{
			if(string[i]==j)
				count++;
		}
		printf("%d ",count);
		count=0;
	}
	printf("\n");
}
