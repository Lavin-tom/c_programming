#include<stdio.h>
#define flag
#define flag2
int main()
{
    #ifdef flag             //code inside #ifdef and #endif only works when macro flag is defined
    printf("Hai ");
    #endif
    #ifndef flag2           //code inside #ifndef and #endif only works when macro flag2 is not defined 
    printf("Hello ");
    #endif              
    printf("world\n");      //printf is outside the conditional compilation so works every time
}