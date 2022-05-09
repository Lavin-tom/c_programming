//linked list queue

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *link;
};

struct queue *rear,*front;

void enque(int);
int deque();
int main()
{
	int data;
	int choice;
	while(1)
	{
		printf("\nchoose any option\n");
		printf("1.Enque 2.Deque 3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&data);
				enque(data);
				break;
			case 2: if(front==NULL)
					printf("Queue is empty\n");
				else
				printf("%d is dequed\n",deque());
				break;
			case 3: exit(0);
		}
	}
}

//enque
//add at last
void enque(int value)
{
	struct queue *newnode=NULL;
	newnode=(struct queue*)calloc(1,sizeof(struct queue));
	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		if(front==NULL)
			front=newnode;
		else
			rear->link=newnode;
		newnode->data=value;
		rear=newnode;
	}
}

//deque
//delete from last
int deque()
{
	int d;
	struct queue *temp=NULL;
	temp=front;
	front=front->link;
	if(front==NULL)
		rear=NULL;
	d=temp->data;
	free(temp);
	temp=NULL;
	return d;
}
