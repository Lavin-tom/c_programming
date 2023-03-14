//convert the case to upper

#include<stdio.h>
int main()
{
    char word[10];
    printf("enter string\n");
    scanf("%s",word);

    for(int i=0;word[i];i++)
    {
        word[i]=word[i]^32;
    }
    printf("%s",word);
}