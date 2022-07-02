//convert the string into oppo case
#include<stdio.h>
int main()
{
	char str[10];
	printf("enter string\n");
	scanf("%s",str);

	for(int i=0;str[i];i++)
	{
		printf("%c",str[i]^32);
	}
	printf("\n");
}
