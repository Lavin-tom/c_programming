//doubly linked list 
//add first

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int data;
	struct student *link,*prev;
};
struct student *add_first(struct student *);
void display(struct student *);
int main()
{
	int choice;
	struct student *head=NULL;
	while(1)
	{
	printf("1.Add first 2.Display 3.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: head=add_first(head);
			break;
		case 2: display(head);
			break;
		case 3: exit(0);
	}
	}
}

struct student *add_first(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=(struct student *)calloc(1,sizeof(struct student));
	if(newnode==NULL)
		printf("node not created\n");
	else
		{
			printf("enter the data\n");
			scanf("%d",&newnode->data);

			if(ptr==NULL)
				ptr=newnode;
			else
			{
				temp=ptr;
				newnode->link=ptr;
				ptr->prev=newnode;
				ptr=newnode;
			}
		}
	return ptr;
}
void display(struct student *ptr)
{
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		while(ptr)
		{
			printf("%d ",ptr->data);
			ptr=ptr->link;
		}
		printf("\n");
	}
}
