//myheader.h

#include<stdio.h>
#include<stdlib.h>
struct BST
{
	int data;
	struct BST *right;
	struct BST *left;
};

struct BST *insert(struct BST *,int);
struct BST *min(struct BST *ptr);
struct BST *del(struct BST *,int);
void inorder(struct BST *ptr);
