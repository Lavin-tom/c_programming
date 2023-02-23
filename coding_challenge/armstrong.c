//armstrong no
#include<stdio.h>
#include<math.h>
void checkArmstrong(int n)
{
    int temp = n,temp1=n,length =0,r,d=1,sum=0;
    while(temp>0)
    {
        length++;
        temp/=10;
    }
    while(temp1>0)
    {
        r = temp1%10;
        int l=0,d=1;
        while(l<length)
        {
            d *= r;
            l++;
        }
        sum += d;
            printf("%d\n",sum);
        temp1/=10;
    }
    printf("%d\n",sum);
    if(sum == n)
        printf("armstrong no\n");
    else
        printf("not armstrong no\n");
}
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    checkArmstrong(n);
}