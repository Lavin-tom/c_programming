//display.c
#include"myheader.h"
void display(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
		printf("List is empty\n");
	else
	{
		temp=ptr;
		while(temp)
		{
			printf("%d %s\n",temp->roll,temp->name);
			temp=temp->link;
		}
	}
}
