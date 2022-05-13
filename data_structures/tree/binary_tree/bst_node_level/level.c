//level.c

#include"myheader.h"

int level(struct BST *ptr,int d)
{	static int count,tcount;
	count++;
	if(ptr==NULL)
	{
		printf("Node not existing\n");
		return -1;
	}
	else if(d < ptr->data)
	{
		return level(ptr->left,d);
	}
	else if(d > ptr->data)
	{
		return level(ptr->right,d);
	}
	else
	{	tcount=count-1;
		count=0;
		return tcount;
	}
}
