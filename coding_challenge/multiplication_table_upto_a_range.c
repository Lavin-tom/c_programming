//multiplication table upto a range

#include<stdio.h>
int main()
{
    int n,product=1,i=1;
    printf("Enter n\n");
    scanf("%d",&n);

    while(product<=n)
    {
        printf("%d * %d = %d\n",i,i,product);
        i++;
        product = i*i;
    } 
}