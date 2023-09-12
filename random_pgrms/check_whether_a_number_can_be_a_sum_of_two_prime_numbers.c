//Check if a prime number can be expressed as sum of two Prime Numbers
#include<stdio.h>
int check_prime(int);
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    
    //check wheather n and n-2 is prime or not
    if(check_prime(n)&&check_prime(n-2))
        printf("%d is possible to write as a sum of two prime numbers\n",n);
    else
        printf("%d is not possible to write as a sum of two prime numbers\n",n);
}
int check_prime(int n)
{
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count)
        return 0;
    else 
        return 1;
}
