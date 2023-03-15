//function pointer


#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int(*operator)(int,int);    //function pointer
    int x = 10, y= 20;
    operator = add;
    printf("%d\n",operator(x,y));
    operator = sub;
    printf("%d\n",operator(x,y));
    operator = mul;
    printf("%d\n",operator(x,y));
}