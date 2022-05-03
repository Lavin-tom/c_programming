//dispaly -for debug

#include"myheader.h"
void display (struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}
