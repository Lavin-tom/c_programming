//multiplication without operator

#include<stdio.h>
int multipy(int a,int b)
{
    static int count=0,sum=0;
    sum = sum+a;
    count++;
    if(count<b)
        multipy(a,b);
    return sum;
}
int main()
{
    int a,b,res;
    printf("enter no\n");
    scanf("%d %d",&a,&b);
    res = multipy(a,b);
    printf("%d\n",res);
}