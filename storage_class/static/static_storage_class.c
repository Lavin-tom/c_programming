//static storage class
//static global means we can't use that variable outside the pgrm with extern command
//for a normal global varialbe we can access other pgrm but by using static we can't

#include<stdio.h>
static int j = 0;                   //static global variable
void globalFunctionCall(void)
{
    j++;
    printf("%d ",j);
    if(j<5)
        globalFunctionCall();
}
void staticFunctionCall(void)
{
    static int i = 0;
    i++;
    printf("%d ",i);
    if(i<5)
        staticFunctionCall();
}
int main()
{
    staticFunctionCall();
    printf("\n");
    globalFunctionCall();
}