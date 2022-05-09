//priority queue
//delete according to the priority
//sort node according to the priority
//delete last node and assign second last node as last node

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	int priority;
	struct queue *link;
};
struct queue *add(struct queue *);
struct queue *delete(struct queue *);
void display(struct queue *);

int main()
{
	int choice;
	struct queue *head=NULL;
	while(1)
	{
	printf("\nchoose any option\n");
	printf("1.Adding 2.Delete 3.Display 4.Exit\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: head=add(head);
			break;
		case 2: head=delete(head);
			break;
		case 3: display(head);
			break;
		case 4: exit(0);
	}
	}
}

//adding
struct queue *add(struct queue *ptr)
{
	struct queue *newnode=NULL,*temp=NULL,*prev=NULL;
	newnode=(struct queue *)calloc(1,sizeof(struct queue));
	if(newnode==NULL)
		printf("newnode is not created\n");
	else
	{
			printf("enter the data\n");
                        scanf("%d",&newnode->data);
			printf("add priority to the data\n");
			scanf("%d",&newnode->priority);
		
		//sorting according to the priority
		//sorting priority as accending order
		if(ptr==NULL || newnode->priority < ptr->priority)
		{
			newnode->link=ptr;
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp && newnode->priority > temp->priority)
			{
				prev=temp;
				temp=temp->link;
			}
			prev->link=newnode;
			newnode->link=temp;
		}
	}
	return ptr;
}
//delete
//delete last
struct queue *delete(struct queue *ptr)
{
	struct queue *temp=NULL,*prev=NULL;
	if(ptr==NULL)
	printf("Queue is empty\n");
	else
	{
		//delete last node and assign second last node as last node
		temp=ptr;
		while(temp->link!=NULL)
		{
			prev=temp;
			temp=temp->link;
		}
		printf("%d is deleted\n",temp->data);
		prev->link=NULL;
		free(temp);
		temp=NULL;
	}
	return ptr;
}

//display
void display(struct queue *ptr)
{
	if(ptr==NULL)
		printf("Nothing to show. Queue is empty\n");
	else
	{
		while(ptr)
		{
			printf("%d:%d ",ptr->data,ptr->priority);
			ptr=ptr->link;
		}
	}
}
