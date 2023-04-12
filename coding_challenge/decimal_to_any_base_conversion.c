//convertion of decimal to any base 

#include<stdio.h>
int main()
{
    int num,base,r=0,m,p;
    char a[100];
    printf("enter the number which you want to convert\n");
    scanf("%d",&num);

    printf("enter the base in which you want to convert\n");
    scanf("%d",&base);

    while(num>0)
    {
        m = num % base;
        p = '0'+m;
        if(p>'9')
            p+=7;
        a[r] = p;
        r++;
        num/=base;
    }   
    for(int i=r-1;i>=0;i--)
        printf("%c",a[i]);
    printf("\n");
    return 0;
}