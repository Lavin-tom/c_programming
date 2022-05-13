//binary search tree
//wap to search node value is existing or not  

#include"myheader.h"
int main()
{
	int choice,value;
	struct BST *root=NULL,*temp=NULL;
	while(1)
	{
		printf("\nchoose any option\n");
		printf("1.Insert 2.Search 3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2: printf("enter the data to be search\n");
				scanf("%d",&value);
				if(root==NULL)
					printf("BST is empty\n");
				else
				{
					temp=search(root,value);
					if(temp)
						printf("%d is found ",temp->data);
				}
				break;
			case 3: exit(0);
		}
	}
}
