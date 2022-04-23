//multiple file compilation
//headerfile

#include<stdio.h>
#include<stdlib.h>

struct Student
{
int roll;
char name[20];
float marks;
struct Student *link;		//self referencial pointer
};

struct Student  * Add_sorted(struct Student *);
struct Student  * Del_data(struct Student *);
void Display();


