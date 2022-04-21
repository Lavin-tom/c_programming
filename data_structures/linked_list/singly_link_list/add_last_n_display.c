//add last and display

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *link;		//self referential pointer
};

struct student *add_last(struct student *);
void display(struct student*);

int main()
{
	struct student *head=NULL;
	int choice;
	while(1)	//super loop
	{
		printf("enter your choice\n");
		printf("1.Add last 2.Display 3.Exit\n");
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
	struct student *newnode=NULL,*temp=NULL;

	//creating node
	newnode=(struct student *)calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		//node created sucessfully 
		//initialize the node
		printf("enter the rollno\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);

		//link to list
		if(ptr==NULL)
		{
			ptr=newnode;	//added as first node
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
	}
	return ptr;
}

//for display
void display(struct student *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
			ptr=ptr->link;
		}
	}
}
