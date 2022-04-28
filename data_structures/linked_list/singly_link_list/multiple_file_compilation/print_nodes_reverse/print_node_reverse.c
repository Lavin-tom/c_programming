//print node reverse
//not yet completed 

#include"myheader.h"
struct student *print_node_reverse(struct student *ptr)
{
	struct student *temp=NULL,*temp1,*prev=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
	 	temp=ptr;
		prev=NULL;
		while(temp)
		{
			temp1=prev;
			prev=temp;
			temp=temp->link;
		}
	}
}
