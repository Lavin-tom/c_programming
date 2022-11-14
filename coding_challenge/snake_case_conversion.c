//wap to convert out string into snake_case
//from camelCase
//camelCase - snake_case
#include<stdio.h>
#include<string.h>
int main()
{
	char word[30],index=0,i,flag=0;
	printf("enter word to convert\n");
	scanf("%s",word);

	int l=strlen(word);
	for(i=0;word[i];i++){
			if(word[i]>=65 && word[i]<=90){
				flag=1;
				//convert to lowercase
				word[i]+=32;
				index=i;

				//string right shift
				for(int j=l+1;j>i;j--){
					word[j]=word[j-1];
				}
			}
			 if(flag=1 && index!=0)
                		word[index]='_';
	}
	printf("%s\n",word);
}
