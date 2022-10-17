//strcspn
//function calculate the length of the no of character before the 1st occurance of character present in both the string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("enter string\n");
	scanf("%s %s",str1,str2);

	int size=strcspn(str1,str2);
	printf("the unmatched character before first matched characters : %d\n",size);
}
