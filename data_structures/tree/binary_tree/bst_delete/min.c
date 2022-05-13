//min.c

#include"myheader.h"

struct BST *min(struct BST *ptr)
{	
	if(ptr && ptr->left)
	{
		return min(ptr->left);
	}
	else
		return ptr;
}

