//min.c
//minimum node value in binary search tree
//left most node have the minimum value

#include"myheader.h"
void min(struct BST *ptr)
{
	if(ptr==NULL)
		printf("Tree is empty\n");
	else
	{
		while(ptr->left!=NULL)
		{
			ptr=ptr->left;
		}
		printf("%d is the minimum node value\n",ptr->data);
	}
}
