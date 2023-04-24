#include<stdio.h>
#include"header.h"
void setArray(int arr[])
{
    int option;
    printf("1.yeah i am going to enter array elements\n2.I am go with random nos\n");
    scanf("%d",&option);
    if(option==2)
    {
        for(int i=0;i<size;i++)
            arr[i] = randomNoGen();
    }
    else
    {
        printf("enter array elements\n");
        for(int i=0;i<size;i++)
            scanf("%d",&arr[i]);
    }
}