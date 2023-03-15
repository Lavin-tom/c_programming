//string reverse without using any predefined function 

#include<stdio.h>
#include<stdlib.h>
int wordCount(char word[])
{
    int length=0;
    for(int i=0;word[i];i++)
    {
        length++;
    }
    return length;
}
void reverseTheWord(char word[])
{
    int len;
    char temp;
    len = wordCount(word);
    for(int i =0,j=len-1;i<len/2;i++,j--)
    {
        if(word[i]!=word[j])
        {
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
        }
    }
    printf("%s",word);
}

int main ()
{
    int n;
    printf("enter size of string\n");
    scanf("%d",&n);
    //char *word = (char *)malloc(n*sizeof(char));
    char *word = (char *)calloc(n, sizeof(char));
    printf("enter string\n");
    scanf("%s",word);
    reverseTheWord(word);
    free(word);
}