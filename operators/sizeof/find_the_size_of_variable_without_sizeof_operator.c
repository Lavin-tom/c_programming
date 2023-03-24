//wap to find the size of variable without using size of operator
//using bitwise operator 

#include <stdio.h>
int main()
{
    char a = 1;
    int size = 1;
    while(a=a<<1)
      size++;

    printf("Size of char in Bits: %d\n",size);
    printf("Size of char in Bytes: %d\n", size/8);
} 