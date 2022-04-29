//delete_data.c

#include"myheader.h"
struct student *delete_data (struct student *ptr)
{
	struct student *temp=NULL,*prev=NULL;
	int data;
	printf("enter the data\n");
	scanf("%d",&data);
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else if(data==ptr->roll)
	{
		if(ptr->link==ptr)
		{
			free(ptr);
			ptr=NULL;
		}
		else
		{
			prev=ptr;
			temp=ptr;
			while(prev->link!=ptr)
			{
				prev=prev->link;
			}
			//moving pointer to second
			ptr=ptr->link;
			//updating last node link with latest node
			prev->link=ptr;
		       free(temp);
	       		temp=NULL;	       
		}
	}
	else
	{
		prev=ptr;
		temp=ptr->link;
		while(temp!=ptr && data !=temp->roll)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==ptr)
		{
			printf("Data not found\n");
		}
		else
		{
			prev->link=temp->link;
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}
