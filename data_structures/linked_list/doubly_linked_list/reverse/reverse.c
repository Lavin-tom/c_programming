//del_first.c

#include"myheader.h"

struct student *reverse(struct student *ptr)

{
	struct student *temp=NULL,*next=NULL;
	
		if(ptr==NULL)
		{
			printf("List is empty\n");
		}
		//only one node available
		else if(ptr->link==NULL)
		{
			printf("reverse is not required\n");
		}
		else
		{
			next=ptr;
			while(next)
			{
				temp=next->prev;
				next->prev=next->link;
				next->link=temp;

				next=next->prev;
			}
			ptr=temp->prev;
		}
	return ptr;	
}
