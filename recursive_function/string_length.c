//wap to find the string length using recursive concept

#include<stdio.h>
int string_length(char a[],int index);
int main()
{
        char a[10];
        int length,index=0;
        printf("enter the string\n");
        scanf("%s",a);

        length=string_length(a,index);
        printf("length of string is %d\n",length);
}

//function body
//find the length of string using recursive concept
int string_length(char a[],int index)
{
        static int count=0;
        if(a[index])
        {
                count++;
        string_length(a,index+1);
        }
        else
                return count;
}
