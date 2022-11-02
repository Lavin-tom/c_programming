//convert lowercase chara into upper case
#include<stdio.h>
int main()
{
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);

	ch=ch-32;		//97-x=65  x=32
	printf("%c\n",ch);
}
