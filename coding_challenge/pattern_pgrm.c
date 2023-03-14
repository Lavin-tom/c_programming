//pattern pgrm
//1
//2 3
//4 5 6
//7 8 9 10


#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
}