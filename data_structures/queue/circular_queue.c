//circular queue
//used when leftshifting consume more time.
//some bugs are there. not yet completed.

#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enque(int);
int deque();
void display();

int main()
{
	int choice,data;
	while(1)
	{
	printf("\nchoose any option\n");
	printf("1.Enque 2.Deque 3.Display 4.Exit\n");
	scanf("%d",&choice);

	switch(choice)
		{
			case 1: printf("enter data to add queue\n");
				scanf("%d",&data);
				enque(data);
				break;
			case 2: if(front==-1)
					printf("Queue is empty\n");
				else
					printf("data dequed is %d\n",deque());
				break;
			case 3: display();
				break;
			case 4:	exit(0); 
		}	
	}
}

//enque function
void enque(int data)
{
	if((front==0 && rear==max-1) || (front==rear+1))
	{
		printf("Queue is full\n");
		if((front==0 && rear==max-1))
		rear=-1;
	}
	else
	{
		if(front==-1)//if queue is empty
		{
			front++;
		}
		queue[++rear]=data;
	}
}

//deque function
int deque()
{
	int temp;
	temp=queue[front++];
	if(front==max-1)
	{
		front=-1;
	}
	return temp;
}

//display funcition
void display()
{
	if(front==-1 && rear==-1)
		printf("nothing to show, queue is empty\n");
	for(int i=0;queue[i];i++)
		printf("%d ",queue[i]);
}
