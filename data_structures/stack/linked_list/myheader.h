//myheader.h

#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int roll;
	char name[20];
	struct student *link;
};

struct student *push(struct student *);
struct student *pop(struct student *);
struct student *peek(struct student *);

