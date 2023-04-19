#include<stdio.h>
extern int running;
void exitFun()
{
    printf("Exit.....\n");
    running=0;
}