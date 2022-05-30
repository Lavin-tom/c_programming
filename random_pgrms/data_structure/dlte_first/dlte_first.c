//delete first

#include"myheader.h"
struct student *dlte_first(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
		printf("list is empty,nothing to delete\n");
	else
	{
		//only one node
		if(ptr->link==NULL)
		{
			free(ptr);
			ptr=NULL;
		}
		else
		{
			temp=ptr;
			ptr=temp->link;
			free(temp);
			temp=NULL;
		}

	}
	return ptr;
}
