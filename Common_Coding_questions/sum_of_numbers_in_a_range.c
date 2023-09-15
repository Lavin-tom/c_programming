//wap to find the sum of numbers in a range
#include <stdio.h>

int main()
{
    int a,b,sum=0;
    printf("enter range\n");
    scanf("%d %d",&a,&b);
    
    for(int i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("sum of numbers from %d to %d is %d\n",a,b,sum);

    return 0;
}
