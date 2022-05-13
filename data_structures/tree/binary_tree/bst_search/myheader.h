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
struct BST *search(struct BST *,int);
