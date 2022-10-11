#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,count=0,r;
    printf("enter binary no :\n");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*(pow(2,count)));	//power function
        count++;
        num=num/10;
    }
    printf("equalent decimal no: %d\n",sum);
}