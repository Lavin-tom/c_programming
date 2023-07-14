//string to binary conversion
#include<stdio.h>
#include<stdlib.h>
void convertToBinary(char word[],int size)
{
    for(int i=0;i<size;i++)
    {
        int ascii = word[i];
        for(int j=7;j>=0;j--)
        {
            printf("%d",(ascii>>j&1));
        }
        printf(" ");
    }
    printf("\n");
}
int main()
{
    int size;
    printf("enter size of word");
    scanf("%d",&size);
    char *word = (char*)malloc(size*sizeof(char));
    printf("enter string\n");
    scanf("%s",word);
    convertToBinary(word,size);

    free(word);
} 