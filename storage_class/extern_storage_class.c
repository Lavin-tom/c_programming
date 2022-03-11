//simple program to learn working of extern storage class
#include<stdio.h>
extern int i;
int main()
{
	printf("value of i is :%d",i);
}
int i=10;

//there are four stages are in compilation
//preprocessor stage
//transilator stage
//assemply stage
//linker stage

//we can see the find which stage shows error
//so we can use some terminal commands
//for prepossor stage -  cc -E test.c - o test.i
//for transilator stage  cc -S test.c - o test.s
//for assemply stage  cc -c test.c - o test.o
//for linker stage cc test.o 
//----------------------------
//in this code i is not declared so it shows error.
//but by using the extern storage class, we can skip the error make by Transilator stage
//assemply stage is not doing anything it just convert the code into object code
//but it shows error in linker stage. but using extern storage class. linker can identify that 
//some where i is declared in the program so liner find the value of i and assign. 
