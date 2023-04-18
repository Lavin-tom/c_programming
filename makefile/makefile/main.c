//makefile
//command line arguments
//atoi function - ascii to integer

#include"header.h"
#include<stdio.h>
int main(int argc,char *argv[])             //command line argument
{
    if(argc!=3)
        printf("not enough input, need ./a.out num1 num2\n");
    else
    {
        int num1 = atoiUser(argv[1]);       //calling atoi user defined function 
        int num2 = atoiUser(argv[2]);
        printf("%d\n",sum(num1,num2));
    }
}