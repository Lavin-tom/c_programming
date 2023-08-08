#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    printf("Before swap - a:%d b:%d\n",a,b);
    swap(&a,&b);
    printf("After swap - a:%d b:%d\n",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap function - a:%d b:%d\n",*a,*b);
}