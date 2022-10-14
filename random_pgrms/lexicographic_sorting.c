//lexicographic sorting
//nothing but dictionary order 
//without strcmp and strcpy pre function
//[wip] not yet completed

#include<stdio.h>
#include<string.h>
void scan_words(char words[][5]);
void print_array(char words[][5]);
void word_count(int n,int k,int array[5],char words[][5]);
int main()
{
	char words[5][5];		//accepting words of five length of five
	int word1_count=0,n,array[5];
	scan_words(words);

	word_count(0,0,array,words);
	word_count(1,1,array,words);
	word_count(2,2,array,words);
	word_count(3,3,array,words);
	word_count(4,4,array,words);
	

	for(int i=0;i<5;i++)
		printf("%d ",array[i]);
	printf("\n");

	//sorting
	for(int i=0;i<5;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(array[j]>array[j+1])
			{
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	
	
	printf("after sorting:\n");
	for(int i=0;i<5;i++)
		printf("%d ",array[i]);

	//void word_count(int n,int k,int array[k],char words[][5])
//{
        //int n=0;
        int word_count=0,word,k;
	for(int j=0;j<5;j++)
	{
        for(int i=0,k=0;i<strlen(words[k]);i++,k++)
        {
                //check for upper case or lower case
                if(words[k][i]>=97)
                {
                        word=words[k][i]-32;
                }
                word_count=(word_count*100)+word;

        if(strlen(words[k])<5)
        {
                for(int i=strlen(words[k]);i<5;i++)
                        word_count=word_count*10;
        }
	printf("\n %d ",word_count);
	if(array[j]==word_count)
		printf("%s \n",words[k]);
	}
	}
//}
	//	printf("%d ",array[i]);
}


//defenition to scan words
void scan_words(char words[][5])
{
	printf("enter words\n");
	for(int i=0;i<5;i++)
		scanf("%s",words[i]);
}
//defenition to print array
void print_array(char words[][5])
{
	for(int i=0;i<5;i++)
		printf("%s ",words[i]);
	
	printf("\n");
}
//count words
void word_count(int n,int k,int array[k],char words[][5])
{
	//int n=0;
	int word_count=0,word;
	for(int i=0;i<strlen(words[n]);i++)
	{
		//check for upper case or lower case
		if(words[n][i]>=97)
		{
			word=words[n][i]-32;
		}
		word_count=(word_count*100)+word;
	}

	if(strlen(words[n])<5)
	{	
		for(int i=strlen(words[n]);i<5;i++)
			word_count=word_count*10;
	}
	array[k]=word_count;
}
