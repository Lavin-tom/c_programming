//myheader.h

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int roll;
	char name[20];
	struct student *link,*prev;
};

struct student *add_first(struct student *);
void display(struct student *);
