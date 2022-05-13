//binary search tree

#include"myheader.h"
int main()
{
	int choice,value;
	struct BST *root=NULL,*temp=NULL;
	while(1)
	{
		printf("\nchoose any option\n");
		printf("1.Insert 2.Delete 3.Minimum 4.Inorder 5.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2: printf("enter the data to be Delete\n");
				scanf("%d",&value);
				if(root==NULL)
					printf("BST is empty\n");
				else
					root=del(root,value);
				break;
			case 3: temp=min(root);
				if(temp)
				printf("node with min val is %d",temp->data);
				else
					printf("BST is empty\n");
				break;
			case 4: inorder(root);
				break;
			case 5: exit(0);
		}
	}
}
