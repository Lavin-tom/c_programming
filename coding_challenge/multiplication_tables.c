//multiplication table 

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter range\n");
    scanf("%d %d",&a,&b);
        for(int i=1;i<=10;i++)
        {
            for(int k=a;k<=b;k++)
                printf("%d * %d = %d \t",k,i,k*i);
            printf("\n");
        }
}