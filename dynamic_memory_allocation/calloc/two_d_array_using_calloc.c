//2d array using dma
//dynamic memory allocation 

#include<stdio.h>
#include<stdlib.h>
#define raw 3
#define column 3
void setArray(int **arr)
{
    for(int i=0;i<raw;i++)
    {
        for(int j=0;j<column;j++)
        {
            arr[i][j] = i+j;
        }
    }
}
void getArray(int **arr)
{
    for(int i=0;i<raw;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void deallocate(int *arr[])
{
        for(int i=0;i<raw;i++)
        free(arr[i]);
}
int main()
{
    int *arr[raw];
    for(int i=0;i<raw;i++)
        arr[i] = (int*)calloc(column,sizeof(int));

    setArray(arr);
    getArray(arr);
    deallocate(arr);
}