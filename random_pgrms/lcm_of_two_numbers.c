#include<stdio.h>
int main()
{
    int a,b,big=0,lcm;
    printf("enter two nos\n");
    scanf("%d %d",&a,&b);

    if(a>b)
        big=a;
    else
        big=b;
        for(int i=big;;i++)
        {
            if(i%a==0 && i%b==0)
            {
                lcm=i;
                break;
            }
        }
        printf("LCM of %d and %d is %d\n",a,b,lcm);
}