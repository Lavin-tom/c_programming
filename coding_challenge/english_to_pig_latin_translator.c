//Pig latin has two very simple rules:

//If a word starts with a consonant move the first letter(s) of the word, till you reach a vowel, to the end of the word and add "ay" to the end.
//have ➞ avehay
//cram ➞ amcray
//take ➞ aketay
//cat ➞ atcay
//shrimp ➞ impshray
//trebuchet ➞ ebuchettray

//If a word starts with a vowel add "yay" to the end of the word.
//ate ➞ ateyay
//apple ➞ appleyay
//oaken ➞ oakenyay
//eagle ➞ eagleyay

#include<stdio.h>
#include<string.h>
int main()
{
	char word[10],yay[4]="yay",ay[3]="ay",temp;
	printf("enter string\n");
	scanf("%s",word);

	int length=strlen(word);

	//if a word is start with vowel then add "yay" at the end
	if(word[0]=='a' || word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u')
		printf("%s%s\n",word,yay);
	else
	{
		//left shift of string
		for(int i=0;i<length;i++)
		{
			//loop rotate until find a vowel 
			if(word[0]=='a' || word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u')
				break;
			
			//first word is taken into temp variable
			temp=word[0];
			for(int j=0;j<length;j++)
			{
				word[j]=word[j+1];
			}
			//temp variable add as last variable
			word[length-1]=temp;
			//add "ay" at the end of word
			printf("%s%s\n",word,ay);
		}
	}
}
