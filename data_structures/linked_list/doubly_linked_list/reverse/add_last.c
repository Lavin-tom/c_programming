//add_last.c

#include"myheader.h"
struct student *add_last(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	//dma
	newnode=(struct student *)calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the roll no\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
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
			//forward linking
			temp->link=newnode;
			//backward linking
			newnode->prev=temp;
		}
	}
	return ptr;
}
