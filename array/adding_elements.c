//adding elements

#include<stdio.h>
#define size 5
int main()
{
    int arr[size],data,pos;
    printf("enter array elements..\n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter position and data\n");
    scanf("%d %d",&pos,&data);

    for(int i=size-1;i>=pos;i--)
        arr[i+1]= arr[i];

    arr[pos] = data;
    for(int i=0;i<=size;i++)
        printf("%d ",arr[i]);
}