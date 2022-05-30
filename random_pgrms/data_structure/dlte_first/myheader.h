//myheader.h

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int data;
	struct student *link;
};

struct student *add_first(struct student*);
void display (struct student*);
struct student *dlte_first(struct student*);
