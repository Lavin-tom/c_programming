//Letter Distance
//Given two words, the letter distance is calculated by 
//taking the absolute value of the difference in character codes and summing up the difference.

//If one word is longer than another, add the difference in lengths towards the score.

#include<stdio.h>
int main()
{
	char word1[10],word2[10];
	printf("enter words\n");
	scanf("%s %s",word1,word2);

	int word1_length=0,word2_length=0,length=0,diff=0,sum=0;
	
	//to find the length of first word
	for(int i=0;word1[i];i++)
		word1_length++;
	//to find the length of second word
	for(int i=0;word2[i];i++)
		word2_length++;
	//find the difference in no of words
	int gap=word1_length-word2_length;
	
	//to avoid negative sign
	if(gap<0)
		gap*=-1;
	
	//printf("word length: %d %d\n",word1_length,word2_length);
	
	//check for smallest word
	if(word1_length<word2_length)
		length=word1_length;
	else
		length=word2_length;

	//each word is compare with second word
	for(int i=0;i<length;i++){
		diff=word1[i]-word2[i];
		if(diff<0)
			diff*=-1;
		sum=sum+diff;
		//printf("diff: %d \n",diff);
		//printf("sum: %d \n",sum);
	}
	printf("Letter distance: %d\n",sum+gap);
}
