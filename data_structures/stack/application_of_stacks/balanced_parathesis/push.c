//push.c

#include"myheader.h"
struct stack *push (char d,struct stack *ptr)
{
	struct stack *newnode=NULL,*temp=NULL;
	newnode=(struct stack*)calloc(1,sizeof(struct stack));
	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		newnode->data=d;
		if(ptr==NULL)
			ptr=newnode;
		else
		{
			temp=ptr;
			newnode->link=ptr;
			ptr=newnode;
		}
	}
	return ptr;
}