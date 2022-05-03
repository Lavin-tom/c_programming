//del_first.c

#include"myheader.h"

struct student *del_first(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=ptr;
		ptr=temp->link;
		free(temp);
		temp=NULL;
	}
	return ptr;
}
