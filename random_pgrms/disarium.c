//wap to find the no is disarium or not
#include<stdio.h>
int main()
{
    int num,temp=0,count=0,sum=1,d,total_sum=0,temp2;
    printf("enter num\n");
    scanf("%d",&num);

    temp=num;
    temp2=num;
    //to check the no of digit in user entered value
    while(temp>0)
    {
        count++;
        temp/=10;
    }
    while(num>0)
    {
        d=num%10;
            while(count>0)
            {
                sum=sum*d;
                count--;
            }
            total_sum=total_sum+sum;
        num/=10;
    }
    if(total_sum==temp2)
        printf("%d is a disarium no\n",temp2);
    else
        printf("%d is not a disarium no\n",temp2);
}