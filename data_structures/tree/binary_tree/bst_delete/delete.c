//delete.c

#include"myheader.h"

struct BST *del(struct BST *ptr,int d)
{
	struct BST *temp=NULL;
	if(ptr==NULL)
	{
		printf("%d is not found\n",d);
	}
	else if(d < ptr->data)
		ptr->left=del(ptr->left,d);
	else if(d > ptr->data)
		ptr->right=del(ptr->right,d);
	else
	{
		//node having two child
		if(ptr->left && ptr->right)
		{
			temp=min(ptr->right);
			ptr->data=temp->data;
			ptr->right=del(ptr->right,temp->data);
		}
		//node having sigle or no child
		else 
		{
			temp=ptr;
			if(ptr->left==NULL)
				ptr=ptr->right;
			else
				ptr=ptr->left;
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}
