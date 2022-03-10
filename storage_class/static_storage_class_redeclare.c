//static storage class
//redeclare the storage class
//notes

#include<stdio.h>
//global variable
static int i;
static int i;
int main()
{

}
//for global variable if two variables with same name, it is consider as strong and weak symbol
//if they initialized then it is strong symbol
//not initialized then it is weak symbol

//static int i; weak 
//static int i; weak
//is possible 
//but complier take only one and remove other one

//static int i=5; strong 
//static int i;  weak
//is possible 
//but compiler take only strong one

//static int i=5; strong 
//static int i=10; strong
//not possible 
//compiler shows error
