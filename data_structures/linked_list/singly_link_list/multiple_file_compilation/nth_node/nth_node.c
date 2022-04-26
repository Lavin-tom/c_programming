//nth node

#include"myheader.h"

void nth_node(struct student *ptr)
{
	int n,count=0;
	if(ptr==NULL)
		{
			printf("List is empty\n");
		}
	else
	{
		printf("enter the nth value\n");
		scanf("%d",&n);
		while(ptr)
		{
			count++;
			if(count==n)
			{
			printf("%d %s\n",ptr->roll,ptr->name);
			}
			ptr=ptr->link;
		}
	}
}
