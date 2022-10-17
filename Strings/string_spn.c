//strspn
//function return the no of characters in the initial segment of str1 which consist only of characters from str2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("enter string\n");
	scanf("%s %s",str1,str2);

	int size=strspn(str1,str2);
	printf("length of initial segment matching : %d\n",size);
}
