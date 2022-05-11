//not yet completed....need updates
//binary search tree
//preorder
//postorder
//inorder

#include<stdio.h>
#include<stdlib.h>
struct bts
{
	int data;
	struct bts *right;
	struct bts *left;
};

struct bts *insert(struct bts *,int);
struct bts *preorder(struct bts *);
//struct bts *postorder(struct bts *);
//struct bts *inorder(struct bts *);

int main()
{
	int choice,data;
	struct bts *root=NULL;
	while(1)
	{
		printf("\nchoose any option\n");
		printf("1.Insert 2.Preorder 3.Postorder 4.Inorder 5.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&data);
				root=insert(root,data);
				break;
			case 2: root=preorder(root);
				break;
			//case 3: root=postorder(root):;
			//	break;
			//case 4: root=inorder(root);
			//	break;
			case 5: exit(0);
		}
	}
}

//insert
struct bts *insert(struct bts *ptr,int d)
{
	struct bts *newnode=NULL;
	newnode=(struct bts*)calloc(1,sizeof(struct bts));
	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		if(ptr==NULL)
		{
			newnode=ptr;
			//ptr->left=NULL;
			//ptr->right=NULL;
		}
		else
		{	
			if(ptr->data < d)
				ptr->right=insert(ptr->right,d);
			else if(ptr->data > d)
				ptr->left=insert(ptr->right,d);
			else
				printf("duplicates not allowed\n");

		}
	}
	return ptr;
}

//preorder
//root left right

struct bts *preorder(struct bts *ptr)
{
	if(ptr==NULL)
		printf("tree is empty\n");
	else
	{
		printf("%d ",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
	return ptr;
}
