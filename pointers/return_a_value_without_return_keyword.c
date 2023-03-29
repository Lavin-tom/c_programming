//return a value without return keyword

#include<stdio.h>
void sum(int a,int b,int *res)
{
    *res = a + b;
}
int main()
{
    int res;
    sum(10,20,&res);
    printf("sum: %d\n",res);
}