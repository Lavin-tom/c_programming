//typedef structure

#include<stdio.h>
#include<string.h>
typedef struct student
{
    int a;
    char name[10];
}s;
int main()
{
    //struct student s;
    s test;     //instead of writing struct student s using typedef 
    test.a = 10;
    strcpy(test.name,"Word");
    printf("%d %s\n",test.a,test.name);
}