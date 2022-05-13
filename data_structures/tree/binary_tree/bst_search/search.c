//search.c

#include"myheader.h"
struct BST *search(struct BST *ptr,int d)
{
	if(ptr==NULL)
	{
		printf("%d is not found\n",d);
		return NULL;
	}
	//if data less than currnt node value
	else if(d < ptr->data)
		return search(ptr->left,d);
	//if data more than current node value
	else if(d > ptr->data)
		return search(ptr->right,d);
	//match found
	else
		return ptr;
}
