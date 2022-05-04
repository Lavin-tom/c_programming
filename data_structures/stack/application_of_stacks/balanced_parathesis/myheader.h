//myheader.h

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{	
	char data;
	struct stack *link;
};
struct stack *push (char,struct stack *);
struct stack *pop(int,char, struct stack *);
void display(struct stack*);
void check(struct stack*);
