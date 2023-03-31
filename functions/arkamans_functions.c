//arkamans_functions
//for theory - https://www.geeksforgeeks.org/ackermann-function/

#include<stdio.h>
int arkamansFun(int m,int n)
{
    if(m == 0)
    {
        return n+1;
    }
    if(m > 0 && n == 0)
    {
        return arkamansFun(m-1,1);
    }
    if(m > 0 && n > 0)
    {
        return arkamansFun(m-1,arkamansFun(m,n-1));
    }
}
int main()
{
    int m,n,res;
    printf("enter m and n\n");
    scanf("%d %d",&m,&n);
    if(m >= 0 && n >= 0)
    {
        res = arkamansFun(m,n);
        printf("A(%d,%d) = %d",m,n,res);
    }
    else
        printf("m and n should be non negative no\n");
}