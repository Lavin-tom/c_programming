//string compare
#include<stdio.h>
#include<string.h>
int main()
{
	char word1[10],word2[10];
	printf("enter words\n");
	scanf("%s %s",word1,word2);
	printf("%d\n",strcmp(word1,word2));
}
