//delete last
#include"myheader.h"
struct student *dlte(struct student *ptr)
{
	struct student *temp=NULL,*prev=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{

		//only one node
		if(ptr->link==NULL)
		{
			free(ptr);
			ptr=NULL;
			printf("now list is empty\n");
		}
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				prev=temp;
				temp=temp->link;
			}
			prev->link=NULL;
			free(temp);
			//temp=NULL;
		}
	}
	return ptr;
}
