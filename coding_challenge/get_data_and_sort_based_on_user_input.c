//get data and sort based on user input

#include<stdio.h>
#include<stdlib.h>

#define max 20
static int len = 0;
int data;
void sortArray(int arr[],int option)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            switch(option)
            {
            case 1:
                if(arr[i]>arr[j])
                {
                    arr[i] = arr[i]+arr[j];
                    arr[j] = arr[i]-arr[j];
                    arr[i] = arr[i]-arr[j];
                }
                break;
            case 2:
                 if(arr[i]<arr[j])
                {
                    arr[i] = arr[i]+arr[j];
                    arr[j] = arr[i]-arr[j];
                    arr[i] = arr[i]-arr[j];
                }
                break;
            }
        }
    }
}
void setArray(int arr[])
{
    printf("Enter data..add zero to close\n");
    scanf("%d",&data);
        if(data!=0)
        {
            arr[len]= data;
            len++;
            setArray(arr);
        }
}
void getArray(int arr[])
{
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int option;
    int *arr = (int*)malloc(max*sizeof(int));
    setArray(arr);
    getArray(arr);
    printf("Array created\n1.Accending order\n2.Decending order\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
            sortArray(arr,option);
        break;
    case 2:
            sortArray(arr,option);
            break;
    default:
        break;
    }
    getArray(arr);
    free(arr);
}