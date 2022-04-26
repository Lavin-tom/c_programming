//count.c

#include"myheader.h"

struct student *count (struct student *ptr)
{
	int count=0; 
	if(ptr==NULL)
	{
		printf("Nothing to count,nodes are empty\n");
	}
		while(ptr)
		{
			if(ptr!= NULL)
				count++;
			ptr=ptr->link;
		}
		printf("total nodes are :%d\n",count);
}
