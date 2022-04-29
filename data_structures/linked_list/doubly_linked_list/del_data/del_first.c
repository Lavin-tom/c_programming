//del_first.c

#include"myheader.h"
struct student *del_first(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		ptr=ptr->link;
		ptr->prev=NULL;
		free(temp);
		temp=NULL;
	}
	return ptr;
}
