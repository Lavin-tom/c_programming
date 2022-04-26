//myheader.h

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll;
	char name[20];
	struct student *link;
};

struct student *add_list(struct student *);
void display(struct student *);
void nth_node(struct student *);
