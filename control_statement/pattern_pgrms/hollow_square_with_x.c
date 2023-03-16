//hollow square with x symbol

#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 ||j==0 ||j==n-1|i==n-1 ||i==j || (i+j)==n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}   