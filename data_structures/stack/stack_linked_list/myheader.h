//myheader.h

#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *link;
};

struct stack *push(struct stack *);
struct stack *pop(struct stack *);
struct stack *peek(struct stack *);
void display (struct stack *);
