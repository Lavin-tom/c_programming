//inorder.c

#include"myheader.h"

void inorder(struct BST *ptr)
{
	if(ptr)
	{
		inorder(ptr->left);
		printf("%d ",ptr->data);
		inorder(ptr->right);
	}
}
