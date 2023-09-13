//wap to check whether a number can be expressed as a sum of two prime numbers
#include <stdio.h>
int check_prime(int,int);
int main()
{
    int n,s,flag=0;
    printf("enter n\n");
    scanf("%d",&n);
    for(int j=2;j<n;j++)
    {
        for(int k=2;k<n;k++)
        {
            s = check_prime(j,k);
            if(s==n){
                printf("%d can be expressed as the sum of %d and %d",n,j,k);
                flag = 1;
            }
        }
        //two avoid multiple entry
        if(flag==1)
            break;
    }
    if(flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers\n",n);
}
int check_prime(int j,int k)
{
    int count_f,count_s,sum;
    count_f = 0;
    count_s = 0;
    sum = 0;
    //check first number is prime or not
    for(int i=2;i<=j/2;i++)
    {
        if(j%i==0)
            count_f++;
    }
    if(count_f==0)
        sum = sum + j;
    //check second number is prime or not
    for(int i=2;i<=k/2;i++)
    {
        if(k%i==0)
            count_s++;
    }
    if(count_s==0)
        sum = sum + k;
    
    return sum;
}
