//postorder.c
//left right root
 
#include"myheader.h"

void postorder(struct BST *ptr)
{
	if(ptr)
	{
		
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d ",ptr->data);
	}
}
