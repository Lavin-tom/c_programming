//find the first non repeated character
//Create a function that accepts a string as an argument 
//and returns the first non-repeated character.

#include<stdio.h>
int main()
{
	char word[50];
	int count=0,flag=0;
	printf("enter word\n");
	scanf("%[^\n]s",word);

	for(int i=0;word[i];i++){
		count=0;
		for(int j=0;word[j];j++){
			if(word[i]==word[j])
				count++;
		}
		if(count==1){
		flag=1;
		printf("%c\n",word[i]);
			break;
		}	
	}
	if(flag==0)
		printf("Invalid\n");
}
