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
int level(struct BST *,int);
