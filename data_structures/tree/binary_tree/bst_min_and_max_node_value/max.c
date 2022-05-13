//max.c
//maximum node value in binary search tree
//right most node have the maximum value
//traverse upto right most node to get the maximum value

#include"myheader.h"
void max(struct BST *ptr)
{
	if(ptr==NULL)
		printf("Tree is empty\n");
	else
	{
		while(ptr->right!=NULL)
		{
			ptr=ptr->right;
		}
		printf("%d is maximum node value\n",ptr->data);
	}
}
