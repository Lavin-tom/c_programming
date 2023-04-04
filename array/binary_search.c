//binary serach 

#include<stdio.h>
#include<stdlib.h>
#define size 5
void setArray(int arr[])
{
    printf("enter array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void getArray(int arr[])
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
//selection sort algorithm
void sortArray(int arr[])
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}
void binarySearch(int arr[])
{
    int left = 0,right = size-1, middle,data,found_flag=0;
    printf("\nenter data to search\n");
    scanf("%d",&data);
    while(left <= right)
    {
        middle = (left+right)/2;
        if(arr[middle] < data)
            left = middle+1;
        else if(arr[middle] > data)
            right = middle-1;
        else if(arr[middle]==data)
        {
            printf("%d found at position : %d",data,middle);
            found_flag = 1;
            break;
        }    
    }
    if(!found_flag)
            printf("%d is not found in the array\n",data);
}
int main()
{
    int *arr = (int*)malloc(size*sizeof(int));
    setArray(arr);
    sortArray(arr);
    getArray(arr);
    binarySearch(arr);
    free(arr);
}