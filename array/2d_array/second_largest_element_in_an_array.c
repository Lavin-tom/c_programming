//second largest element in an array 

#include<stdio.h>
#include<stdlib.h>
#define size 5

void setArray(int arr[])
{
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
}
void findElement(int arr[])
{
    int big = arr[0],second = 0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>big)
        {
            second = big;
            big = arr[i];
        }
        if(second < arr[i] && arr[i] < big)
        {
            second = arr[i];
        }
    }
    printf("Big element: %d\n",big);
    printf("Second largest element: %d\n",second);
}
int main()
{
    int *arr = (int*)malloc(size*sizeof(int));
    setArray(arr);
    findElement(arr);
    free(arr);
}