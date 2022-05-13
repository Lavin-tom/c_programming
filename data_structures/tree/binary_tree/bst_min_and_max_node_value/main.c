//binary search tree
//wap to find the maximum node value and minumum node value 

#include"myheader.h"
int main()
{
	int choice,value;
	struct BST *root=NULL;
	while(1)
	{
		printf("\nchoose any option\n");
		printf("1.Insert 2.Minimum Node 3.Maximum Node 4.Inorder 5.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2: min(root);
				break;
			case 3: max(root);
				break;
			case 4: inorder(root);
				break;
			case 5: exit(0);
		}
	}
}
