//del_first.c

#include"myheader.h"

struct student *del_first(struct student *ptr)

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
			ptr=ptr->link;
			if(ptr)
				//second node as first node
			ptr->prev=NULL;
			free(temp);
			temp=NULL;
		}
	return ptr;	
}
