//add_last.c

#include"myheader.h"
struct student *add_last(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=(struct student *)calloc(1,sizeof(struct student));
	if(newnode==NULL)
		printf("Node not created\n");
	else
	{
		printf("enter roll\n");
		scanf("%d",&newnode->roll);
		printf("enter name\n");
		scanf("%s",newnode->name);

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
			temp->link=newnode;
		}
	}
	return ptr;
}
