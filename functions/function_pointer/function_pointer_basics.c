//fuction pointers

#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    int res = 0;
    int (*operator)(int,int);

    operator = add;
    res = operator(10,20);
    printf("sum: %d\n",res);

    operator = sub;
    res = operator(10,20);
    printf("sub: %d\n",res);
}