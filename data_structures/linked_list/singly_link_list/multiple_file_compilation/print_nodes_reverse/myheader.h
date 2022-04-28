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
struct student *print_node_reverse(struct student *);
