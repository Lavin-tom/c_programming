//peek.c

#include"myheader.h"
struct stack *peek(struct stack *ptr)
{
	if(ptr==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("Top value of stack %d\n",ptr->data);
	}
	return ptr;
}
