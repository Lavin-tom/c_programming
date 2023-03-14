#include<stdio.h>

int main()
{
    #ifdef macros
    char c = 42;
    printf("%d",c);
    #endif
    printf("without macros define ");
}