//printing reverse character by character from a string

#include<stdio.h>
void print_char(char *a);
int main()
{
	char a[10];
	printf("enter the string\n");
	scanf("%s",a);

	print_char(a);
}
void print_char(char *a)
{
	if(*a)
	{
		print_char(a+1);
		printf("%c\n",*a);
		return;
	}
	else
		return;
}
