//command line arguments

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) //./a.out a b c
{
  if(argc!=1)
    {
        printf("not a valid input\n");
        exit(0);
    }
    else
    {
        printf("%s",argv[1]);       //a
    }
}