//del_data.c

#include"myheader.h"
struct student *del_data(struct student *ptr)
{
	struct student *temp=NULL;
	int data;
	printf("enter the data\n");
	scanf("%d",&data);
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	//if data is matching with first node
	else if(ptr->roll==data)
	{
		ptr=del_first(ptr);
	}
	else
	{
		temp=ptr;
		//checking for data is found or not
		//traverse upto last node
		while(temp->link!=NULL && data!=temp->roll)
		{
			temp=temp->link;
		}
		if(temp==NULL)
			printf("%d not found\n",data);
		else
		{
			//connecting previous node of temp with next node of temp
			temp->prev->link=temp->link;
			if(temp->link)
				temp->link->prev=temp->prev;
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}
