//add_first.c

#include"myheader.h"

struct student *add_first(struct student *ptr)
{
	struct student *newnode=NULL;
	newnode=(struct student*)calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter data\n");
		scanf("%d",&newnode->data);

		if(ptr==NULL)
			ptr=newnode;
		else
		{
			newnode->link=ptr;
			ptr=newnode;

		}
	}
	return ptr;
}
