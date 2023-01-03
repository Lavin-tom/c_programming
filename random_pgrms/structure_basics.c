//structure basics
#include<stdio.h>
struct student
{
	char name[20];
	int roll_no;
};

//function declaration
void set_data(struct student *student1);
void get_data(struct student *student1);

int main()
{
	//structure variables
	struct student s1;

	//passing structure address
	set_data(&s1);
	get_data(&s1);
}

//to set the data
//to access member of a structure pointer we need(arrow operator) -> operator
void set_data(struct student *s1)
{
	printf("Enter roll no and name of student\n");
	scanf("%d %s",&s1->roll_no,s1->name);
}

//to get the data
void get_data(struct student *s1)
{
	printf("roll no: %d\nname: %s\n",s1->roll_no,s1->name);
}
