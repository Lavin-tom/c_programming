//censored string
//Someone has attempted to censor my strings by replacing every vowel with a *, l*k* th*s.
//Luckily, I've been able to find the vowels that were removed.

//Given a censored string and a string of the censored vowels, return the original uncensored string.

#include<stdio.h>
int main()
{
	char word[30],vowels[30];
	printf("enter your sensored string\n");
	scanf("%[^\n]s",word);
	printf("enter vowel string\n");
	scanf("%s",vowels);

	printf("censored:\n%s\n",word);
	int j=0;
	for(int i=0;word[i];i++){
		if(word[i]==42){
			word[i]=vowels[j];
			j++;
		}
	}
	printf("uncensored:\n%s\n",word);
}
