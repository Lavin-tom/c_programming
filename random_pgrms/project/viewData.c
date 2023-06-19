#include<stdio.h>
#include"header.h"
void viewData(int dataLength)
{
    if(dataLength==0)
        printf("No data available\n");
    for(int i=0;i<dataLength;i++)
    {
        printf("%d: %s: %f",s1.roll,s1.name,s1.mark);
    }
    printf("\n");
}