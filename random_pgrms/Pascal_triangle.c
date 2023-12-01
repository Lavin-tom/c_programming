/*
Write a program to form Pascal Triangle using numbers
        1   
      1   1   
    1   2   1   
  1   3   3   1   
1   4   6   4   1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        int x = 1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",x);   
            x = x *(i-j)/j;
        }
        printf("\n");
    }
    
}
