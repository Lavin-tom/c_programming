//stringizing 
//each argument is converted into string

#include<stdio.h>
#define print(c) printf(#c)
int main()
{
	print(hello); //printf("hello");
	print(123);	//printf("123");
	print(45.6);	//printf("45.6");
}
