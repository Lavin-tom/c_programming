#include<stdio.h>
#include<string.h>
#include"header.h"
int login(char defPassword[])
{
    char password[6];
    printf("Login...\n");
    printf("enter password");
    scanf("%s",password);
    if(strcmp(password,defPassword)==0)
    {
        printf("password is correct...\n");
        return 1;
    }
    else
    {
        printf("Password is not correct...\n");
        return 0;
    }
}