//wap to convert out string into camel case
//from snake_case
//snake_case - camelCase
#include<stdio.h>
int main()
{
	char word[30];
	printf("enter word to convert\n");
	scanf("%s",word);

	for(int i=0;word[i];i++){
			if(word[i]=='_'){
				word[i+1]-=32;
				for(int j=i;word[j];j++){
					word[j]=word[j+1];
				}
			}
	}
	printf("%s\n",word);
}
