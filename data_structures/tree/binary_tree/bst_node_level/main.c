//binary search tree
//wap to find the level of node  

#include"myheader.h"
int main()
{
	int choice,value,l;
	struct BST *root=NULL,*temp=NULL;
	while(1)
	{
		printf("\nchoose any option\n");
		printf("1.Insert 2.Find node level 3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2: printf("enter the data \n");
				scanf("%d",&value);
				if(root==NULL)
					printf("BST is empty\n");
				else
				{
					l=level(root,value);
					if(l!=-1)
						printf("Level of %d is %d\n",value,l);
				}
				break;
			case 3: exit(0);
		}
	}
}
