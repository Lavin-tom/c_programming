//AddSorted 
//multiple file compilation

#include"myheader.h"

struct Student *Add_sorted(struct Student *ptr)
{
	struct Student *newnode=NULL,*temp=NULL,*prev=NULL;
	newnode=calloc(1,sizeof(struct Student));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		//initialization
		printf("enter the rollno\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);

		//sorting based on roll no
		if(ptr==NULL || newnode->roll < ptr->roll)
		{
			newnode->link=ptr;
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp && newnode->roll > temp->roll)
			{
				prev=temp;
				temp=temp->link;
			}

			//newnode should be placed b/w the prev and temp
			prev->link=newnode;
			newnode->link=temp;
		}
		
	}
	return ptr;
}
