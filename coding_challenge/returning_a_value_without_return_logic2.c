//returning a value without return command

#include<stdio.h>
void multiply(int a,int b,int *res)
{
    *res = a*b;
}
int main()
{
    int a=10,b=20,res;
    multiply(10,20,&res);
    printf("res: %d\n",res);
}