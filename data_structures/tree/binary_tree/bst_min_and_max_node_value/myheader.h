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
void min(struct BST *);
void inorder(struct BST *);
void max(struct BST *);
