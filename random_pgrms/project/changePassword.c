#include<stdio.h>
#include"header.h"
void changePassword(char defPassword[])
{
    printf("enter new password\n");
    scanf("%s",defPassword);
    printf("password updated..\n");
}