//lexicographic sorting
//nothing but dictionary order 
//sort the strings in a dictionary order
//now works only on words of same length
//[wip] not yet completed

#include<stdio.h>
#include<string.h>
int main()
{
	int w1_count=0,w2_count=0,w3_count=0,w4_count=0,w5_count=0;
	char word1[5],word2[5],word3[5],word4[5],word5[5];
	int word_array[5];
	printf("enter your words\n");
	scanf("%s %s %s %s %s",word1,word2,word3,word4,word5);

	for(int i=0;i<strlen(word1);i++)
		w1_count=(w1_count*100)+word1[i];
		
	printf("w1_count: %d\n",w1_count);
		if(strlen(word1)<5)
		{
			for(int i=strlen(word1);i<5;i++)
				w1_count=w1_count*10;
		}
		word_array[0]=w1_count;

	for(int i=0;i<strlen(word2);i++)
		w2_count=(w2_count*100)+word2[i];


		if(strlen(word2)<5)
		{
			for(int i=strlen(word2);i<5;i++)
				w2_count=w2_count*10;
		}
		
		word_array[1]=w2_count;
	for(int i=0;i<strlen(word3);i++)
		w3_count=(w3_count*100)+word3[i];

		if(strlen(word3)<5)
		{
			for(int i=strlen(word3);i<5;i++)
				w3_count=w3_count*10;
		}
		
		word_array[2]=w3_count;
	for(int i=0;i<strlen(word4);i++)
		w4_count=(w4_count*100)+word4[i];

		if(strlen(word4)<5)
		{
			for(int i=strlen(word4);i<5;i++)
				w4_count=w4_count*10;
		}
		
		word_array[3]=w4_count;
	for(int i=0;i<strlen(word5);i++)
		w5_count=(w5_count*100)+word5[i];
		
		if(strlen(word5)<5)
		{
			for(int i=strlen(word5);i<5;i++)
				w5_count=w5_count*10;
		}
		
		word_array[4]=w5_count;

	for(int i=0;i<5;i++)
		printf("%d ",word_array[i]);

	//sorting
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(word_array[j]>word_array[j+1])
			{
				int temp=word_array[j];
				word_array[j]=word_array[j+1];
				word_array[j+1]=temp;
			}
		}
	}
	printf("\n after sorting \n");
	for(int i=0;i<5;i++)
		printf("%d ",word_array[i]);
	printf("\n");
	for(int i=0;i<5;i++){
		if(word_array[i]==w1_count)
			printf("%s ",word1);
		else if(word_array[i]==w2_count)
			printf("%s ",word2);
		else if(word_array[i]==w3_count)
			printf("%s ",word3);
		else if(word_array[i]==w4_count)
			printf("%s ",word4);
		else 
			printf("%s ",word5);	
	}
	printf("\n");

}
