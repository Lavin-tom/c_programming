//pop.c
//delete last added data
 
#include"myheader.h"

struct stack *pop(struct stack *ptr)
{
	struct stack *temp=NULL;
	if(ptr==NULL)
	{
		printf("\nStack is empty\n");
	}
	else
	{
		//delete top data //last inputed data
		temp=ptr;
		printf("\n%d is poped out\n",ptr->data);
		ptr=temp->link;
		free(temp);
		temp=NULL;
	}
	return ptr;
}
