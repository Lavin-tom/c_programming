//basics of realloc 

#include<stdio.h>
#include<stdlib.h>
#define size 5
int main()
{
    int *arr = (int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
        arr[i]=i;

    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");

    int *new_arr = realloc(arr,size*sizeof(int));
    arr = new_arr;
    for(int i=5;i<10;i++)
        arr[i] = i*2;

    for(int i=0;i<10;i++)
    printf("%d ",arr[i]);
    printf("\n");
    
    free(new_arr);
    free(arr);
}