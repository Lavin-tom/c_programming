//memory mangement in union 

#include<stdio.h>
union student
{
    int a;
    char b;
}s1,s2;
int main()
{
    //union student s1;
    s1.a = 10;
    s1.b = 'a';                
    printf("%d ",s1.a);        //97
    printf("%c\n",s1.b);        //a  because they shared common memory area

    //to avoid that issue we need to use the area and then update the slot 
    s2.a = 10;
    printf("%d ",s2.a);        //20
    s2.b = 'a';
    printf("%c\n",s2.b);        //b     
}