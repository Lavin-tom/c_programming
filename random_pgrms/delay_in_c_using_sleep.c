#include<stdio.h>
#include<time.h>
int main()
{
    int s;
    printf("enter seconds\n");
    scanf("%d",&s);
    
    for(int i=0;i<=s;i++)
    {
        printf("%d\n",i);
        sleep(1);		//delay using sleep
    }
}