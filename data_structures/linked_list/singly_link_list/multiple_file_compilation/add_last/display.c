//display.c
#include"myheader.h"
void display(struct student *ptr)
{
	if(ptr==NULL)
		printf("List is empty\n");
	else
	{

		while(ptr)
		{
			printf("%d %s\n",ptr->roll,ptr->name);
			ptr=ptr->link;
		}
	}

}
