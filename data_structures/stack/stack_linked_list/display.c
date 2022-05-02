//dispaly -for debug
#include"myheader.h"
void display (struct stack *ptr)
{
	struct stack *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp)
		{
			printf("values : %d\n",temp->data);
			temp=temp->link;
		}
	}
}
