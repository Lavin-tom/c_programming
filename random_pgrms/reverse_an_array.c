#include <stdio.h>
#define size 5
void get_array(int[]);
void print_array(int[]);
void reverse_array(int[]);
int main()
{
    int arr[size];
    get_array(arr);
    print_array(arr);
    reverse_array(arr);
    print_array(arr);
}
void get_array(int arr[])
{
    printf("enter array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print_array(int arr[])
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse_array(int arr[])
{
    for(int i=0,j=size-1;i<size/2;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            //swap without third variable 
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
        }
    }
}
