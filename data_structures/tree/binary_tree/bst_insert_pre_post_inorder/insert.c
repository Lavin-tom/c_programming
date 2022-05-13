//insert.c

#include"myheader.h"

struct BST * insert(struct BST *ptr,int d)
{
	if(ptr==NULL)
	{
		ptr=calloc(1,sizeof(struct BST));
		if(ptr==NULL)
		{
			printf("node not created\n");
		}
		else
		{
			//set the root value
			ptr->data=d;
		}
	}
	//if input data is less than root value assign to left
	else if(d < ptr->data)
	{
		ptr->left=insert(ptr->left,d);
	}
	//if input data is greater than root value assign to right
	else if(d > ptr->data)
	{
		ptr->right=insert(ptr->right,d);
	}
	//duplicate value is not consider
	else
	{
		printf("%d is already existing\n",d);
	}
	return ptr;
}
