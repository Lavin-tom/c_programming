//insert.c

#include"myheader.h"
struct BST *insert(struct BST *ptr,int d)
{
	if(ptr==NULL)
	{
		ptr=(struct BST*)calloc(1,sizeof(struct BST));
		if(ptr==NULL)
			printf("Node not created\n");
		else
			ptr->data=d;
	}
	else if(ptr->data > d)
		ptr->left=insert(ptr->left,d);
	else if(ptr->data < d)
		ptr->right=insert(ptr->right,d);
	else
		printf("%d is already inserted\n",d);
	return ptr;
}
