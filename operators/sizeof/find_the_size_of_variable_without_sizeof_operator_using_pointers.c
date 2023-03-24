//wap to find the size of variable without using the sizeof operator
//using pointers

//in pointer arithmetic an object behaves like an array of size 1

#include<stdio.h>
int main()
{

    int a[2];
    int sizeof_int = (char*)(a+1) - (char*)(a);
    
    //method 2
    //int a;
    //int sizeof_int = (char*)((&a)+1) - (char*)(&a);
    printf("%d\n",sizeof_int);
}