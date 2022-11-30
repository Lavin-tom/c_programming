//string length using for loop
#include<stdio.h>
int main()
{
	char string[10],i;
	printf("enter string\n");
	scanf("%s",string);

	for(i=0;string[i];i++);
		printf("length of string %s is %d\n",string,i);
}
