//check.c

#include"myheader.h"
void check(struct stack *ptr)
{
	if(ptr!=NULL)
		printf("not a balanced paranthesis\n");
	else
		printf("balanced paranthesis\n");
}
