//del_last.c

#include"myheader.h"

struct student *del_last(struct student *ptr)

{
	struct student *temp=NULL;
	
		if(ptr==NULL)
		{
			printf("List is empty\n");
		}
		else if(ptr->link==NULL) //only one node availble
		{
			free(ptr);
			ptr=NULL;
		}
		else
		{
			temp=ptr;
			//traverse upto null
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			//make second last node as last node
			temp->prev->link=NULL;
			free(temp);
			temp=NULL;
		}
	return ptr;	
}
