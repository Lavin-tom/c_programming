//data structure
//singly linked list
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
	struct student *link;
};

struct student(*add_last(struct student *ptr));
void display(struct student *ptr);
int main()
{
	struct student *head=NULL;
	int choice;
	while(1)
	{
		printf("enter your choice\n");
		printf("1.Add first 2.Display 3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=add_last(head);
				break;
			case 2: display(head);
				break;
			case 3: exit(0);
		}
	}
}

struct student *add_last(struct student *ptr)
{
	struct student *newnode=NULL, *temp=NULL;

	newnode=(struct student *)calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("Node is not created\n");
	}
	else
	{
		printf("enter rollno\n");
		scanf("%d",&newnode->roll);
		printf("enter name\n");
		scanf("%s",newnode->name);
	}
	if(ptr==NULL)
	{
		ptr=newnode;
	}
	else
	{
		temp=ptr;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=newnode;
	}
	return ptr;
	}


//to display details
void display(struct student *ptr)
{
	if(ptr==NULL)
		printf("List is empty\n");
	else
	{
		while(ptr!=NULL)
		{
			printf("%d %s\n",ptr->roll,ptr->name);
			ptr=ptr->link;
		}
	}
}

