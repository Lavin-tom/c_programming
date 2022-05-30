//myheader.h
#include<stdlib.h>
#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	struct student *link;
};

struct student *add_last(struct student *);
void display(struct student *);
