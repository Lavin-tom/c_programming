//middle.c
#include"myheader.h"
struct student *middle(struct student *ptr)
{
	int count=0,node=0;
	struct student *temp=NULL,*temp2=NULL,*temp1=NULL;
	if(ptr==NULL)
		printf("List is empty\n");
	else
	{
		temp=ptr;
		temp1=ptr;
		temp2=ptr;
		while(temp)
		{
			count++;
			temp=temp->link;
		}
		int n=count/2;

		//for odd number of nodes
		if(count%2==1)
		{	
			while(temp1)
			{
				node++;
				if(node==n+1)
				printf("%d %s\n",temp1->roll,temp1->name);
				temp1=temp1->link;
			}
		}
		//for even number of nodes
		else
		{
			while(temp2)
			{
				node++;
				if(node==n || node==n+1)
					printf("%d %s\n",temp2->roll,temp2->name);
				temp2=temp2->link;
			}
		}
	}
}

