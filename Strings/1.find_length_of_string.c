//find length of string
#include<stdio.h>
int main()
{
	char string[20];
	int length=0;
	printf("enter string\n");
	scanf("%s",string);

	for(int i=0;string[i];i++)
		length++;
	printf("length: %d\n",length);
}
