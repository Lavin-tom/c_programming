// call by value example code

#include <stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("enter a and b\n");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("In main function: a: %d b: %d\n", a, b);
}
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("In swap function: a: %d b: %d\n", a, b);
}