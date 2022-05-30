//circular linked list 
//add last
//dlte first
//having some bugs-----not yet completed

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int data;
	struct student *link,*prev;
};
struct student *add_last(struct student *);
void display(struct student *);
struct student *dlte_first(struct student *);
int main()
{
	int choice;
	struct student *head=NULL;
	while(1)
	{
	printf("1.Add last 2.Display 3.Delete first 4.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: head=add_last(head);
			break;
		case 2: display(head);
			break;
		case 3: head=dlte_first(head);
			break;
		case 4: exit(0);
	}
	}
}

struct student *add_last(struct student *ptr)
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
				while(temp->link!=ptr)
				{
					temp=temp->link;
				}
				temp->link=newnode;
			}
			newnode->link=ptr;
		}
	return ptr;
}
void display(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		temp=ptr;
		do
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}while(temp!=ptr);
		printf("\n");
	}
}
struct student *dlte_first(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
		printf("list is empty\n");
	else if(ptr->link==ptr)
	{
		free(ptr);
		ptr=NULL;
	}
		else
		{
		temp=ptr;
		ptr=ptr->link;
		
		free(temp);
		temp=NULL;
		}
	return ptr;
}
