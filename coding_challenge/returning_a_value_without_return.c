//returning a value without return

#include<stdio.h>
int res = 0;
void multiply(int a,int b)
{
    res = a*b;
}
int main()
{
    multiply(10,20);
    printf("result: %d",res);
}