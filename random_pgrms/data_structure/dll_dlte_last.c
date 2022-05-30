//doubly linked list 
//add last
//dlte last

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int data;
	struct student *link,*prev;
};
struct student *add_last(struct student *);
void display(struct student *);
struct student *dlte_last(struct student *);
int main()
{
	int choice;
	struct student *head=NULL;
	while(1)
	{
	printf("1.Add last 2.Display 3.Delete last 4.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: head=add_last(head);
			break;
		case 2: display(head);
			break;
		case 3: head=dlte_last(head);
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
				while(temp->link!=NULL)
				{
					temp=temp->link;
				}
				temp->link=newnode;
				newnode->prev=temp;
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
struct student *dlte_last(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
		printf("list is empty\n");
	else if(ptr->link==NULL)
	{
		free(ptr);
		ptr=NULL;
	}
		else
		{
		temp=ptr;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->prev->link=NULL;
		free(temp);
		temp=NULL;
		}
	return ptr;
}
