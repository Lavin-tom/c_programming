//find the most frequent character from a string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define length 10
int main()
{
    char *word = (char*)malloc(length*sizeof(char));
    printf("enter word\n");
    scanf("%s",word);

    int frequency = 0,  count =0;
    char freqChar;
    int wordlength = strlen(word);
    for(int i=0;i<wordlength;i++)
    {
        count = 0;
        for(int j=0;j<wordlength;j++)
        {
            if(i!=j && word[i]==word[j])
            {
                count++;
            }
            if(count > frequency)
            {
                freqChar = word[i];
                frequency = count;
            }
        }
    }
    printf("frequent :%c",freqChar);
    free(word);
}