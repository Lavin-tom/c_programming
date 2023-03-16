//pattern pgrm
//1
//2 4
//1 3 5 
//2 4 6 8
//1 3 5 7 9
//2 4 6 8 10 12

#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int n,oldCount=1,eventCount=2;
    printf("enter n\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        oldCount=1;
        eventCount=2;
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%d ",oldCount);
                oldCount+=2;
            }
            else
            {
                printf("%d ",eventCount);
                eventCount+=2;
            }
        }
        printf("\n");
    }
}   