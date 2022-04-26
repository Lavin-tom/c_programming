//delete data

#include"myheader.h"

struct Student *Del_data(struct Student *ptr)
{
	struct Student *temp=NULL, *prev=NULL;
	int data;
	printf("enter the data\n");
	scanf("%d",&data);

	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else if(data==ptr->roll)	//matching with first node
	{
		temp=ptr;
		ptr=ptr->link;
		free(temp);
		temp=NULL;
	}
	else
	{
		temp=ptr;
		while(temp && temp->roll!=data)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==NULL)
		{
			printf("%d is not found\n",data);
		}
		else
		{
			prev->link=temp->link;		//assigning next node address to prev node link
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}
