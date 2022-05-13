//inorder
//left root right
//we get assending order of node value
//here we use for debuging 

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
