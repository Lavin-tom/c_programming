//string sorting
//sorting string in a dictionary format

#include<stdio.h>
#include<string.h>
int main()
{
	//accept 10 words having of max length 10
	char words[10][10],temp[10];
	printf("enter words\n");
	for(int i=0;i<10;i++)
		scanf("%s",words[i]);

	//bubble sort
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<9;j++)
		{
			//compare using strcmp- if not matching based on ascii value is genrated
			if((strcmp(words[j],words[j+1]))>0)	//if ascii value is higher swapping word
			{
				strcpy(temp,words[j]);		//strcpy used to copy the word
				strcpy(words[j],words[j+1]);	//swap using temp string
				strcpy(words[j+1],temp);
			}
		}
	}
	
	//printing string in accending order
	for(int i=0;i<10;i++)
		printf("%s ",words[i]);
}
