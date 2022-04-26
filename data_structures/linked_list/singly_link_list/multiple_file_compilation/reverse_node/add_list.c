//add_list.c

#include"myheader.h"

struct student *add_list(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=(struct student*)calloc(1,sizeof(struct student));

	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		printf("Enter the rollno\n");
		scanf("%d",&newnode->roll);
		printf("Enter the name\n");
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
