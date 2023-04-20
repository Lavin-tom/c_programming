//wap to check the given serises is arithmetic progression or not

#include<stdio.h>
#include<stdlib.h>
#define size 5
void set_array(int arr[]);
void get_array(int arr[]);
int check_array(int arr[]);
int main()
{
    int *arr = (int*)malloc(size*sizeof(int));
    set_array(arr);
    int res = check_array(arr);
    if(res)
        printf("yes series is arithmetic progresssion with common difference of :%d\n",res);
    else 
        printf("no series is not arithmetic progression\n");
    free(arr);
}

void set_array(int arr[])
{
    printf("enter array elements\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
}
int check_array(int arr[])
{
    int d = arr[1] - arr[0];
    int count = 0;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]+d == arr[i+1])
            count++;
    }
    if(count == size-1)
        return d;
    else 
        return 0;
}