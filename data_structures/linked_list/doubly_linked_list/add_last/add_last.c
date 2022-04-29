//add_last.c

#include"myheader.h"

struct student *add_last(struct student *ptr)

{
	struct student *newnode=NULL,*temp=NULL;
	newnode=(struct student*)calloc(1,sizeof(struct student));
	
	if(newnode==NULL)
	{
	printf("node not created\n");
	}
	else
	{
		printf("Enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("Enter the name\n");
		scanf("%s",newnode->name);

		if(ptr==NULL)
		{
			//adding first node
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			//traverse upto null
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
