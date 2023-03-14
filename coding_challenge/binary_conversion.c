//no to convert decimal to binary
#include <stdio.h>
int main()
{
    int n,d;
    printf("enter no\n");
    scanf("%d",&n);

    for(int i=7;i>=0;i--)
    {
        d=n>>i&1;
        printf("%d",d);
    }
    return 0;
}
