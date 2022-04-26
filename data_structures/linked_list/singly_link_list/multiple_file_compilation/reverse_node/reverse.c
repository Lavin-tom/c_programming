//reverse.c
#include"myheader.h"
struct student *reverse(struct student *ptr)
{
	struct student *temp=NULL,*prev=NULL,*next=NULL;
	
	//list is empty
	if(ptr==NULL) 
	{
		printf("List is empty\n");
	}
	//if list contain only one node
	else if(ptr->link==NULL)
	{
		printf("No need of reverse\n");
	}
	//if list contain more than one node
	else
	{
		next=ptr;
		while(next)
		{
			prev=temp;
			temp=next;
			next=next->link;
			//linking to previous node
			temp->link=prev;
		}
		ptr=temp;
	}
	return ptr;
}
