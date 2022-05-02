//push.c
//push - last in first out 

#include"myheader.h"
struct stack *push(struct stack *ptr)
{
	struct stack *newnode=NULL,*temp=NULL;
	newnode=(struct stack*)calloc(1,sizeof(struct stack));
	if(newnode==NULL)
	{
		printf("stack is full\n");
	}
	else
	{
		printf("enter the data\n");
		scanf("%d",&newnode->data);

		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			newnode->link=ptr;
			ptr=newnode;
		}
	}
	return ptr;
}
