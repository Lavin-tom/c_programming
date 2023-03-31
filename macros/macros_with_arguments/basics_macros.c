//basics of macros

#include<stdio.h>
typedef unsigned int uint8;
#define FLT_L_HS_A  ((uint8)0x80)   //hexadecimal value typecasted into unsigned int and store it into FLT_L_HS_A
#define FLT_L_HS_B  ((float)0x80)
int main()
{
    printf("%d\n",FLT_L_HS_A);   
    printf("%f\n",FLT_L_HS_B); 
    printf("%x\n",0x80);
}