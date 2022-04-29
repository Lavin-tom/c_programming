//myheader.h

#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int roll;
	char name[20];
	struct student *link;
	struct student *prev;
};

struct student *add_last (struct student *);
struct student *del_data (struct student *);
void display(struct student *);
