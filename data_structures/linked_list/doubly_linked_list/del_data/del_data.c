//del_data.c

#include"myheader.h"
struct student *del_data(struct student *ptr)
{
	struct student *temp=NULL;
	int data;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		printf("enter the data\n");
		scanf("%d",&data);

		temp=ptr;
		while(temp->link!=NULL)
		{
			if(temp->roll == data)
			{
				temp=NULL;
				newnode->prev=ptr->link;
			}
			temp=temp->link;
		}
	}
	return ptr;
}
