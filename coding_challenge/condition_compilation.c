//condition compilation

#include<stdio.h>
#include<string.h>
#define debug
union student
{
    char name[20];
    int rollno;

};

int main()
{
    union student s1;
    s1.rollno = 10;
    printf("%d\n",s1.rollno);    
    strcpy(s1.name, "testing");
    printf("%s\n",s1.name);
    #ifdef debug
    printf("debuging\n");
    #endif
    printf("Hello world\n");
}