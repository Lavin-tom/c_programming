#include<stdio.h>
int multipy(int a)
{
    static int count=0,sum=0;
    sum = sum+a;
    count++;
    if(count<a)
        multipy(a);
    return sum;
}
int main()
{
    int a,res;
    printf("enter no\n");
    scanf("%d",&a);
    res = multipy(a);
    printf("%d\n",res);
}