//circular queue
//used when leftshifting consume more time.

#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enque(int);
void deque();
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
				if(front==-1)
					front++;
				enque(data);
				break;
			case 2: deque();
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
	if((front==0 && rear==max-1))// || (front==rear+1)  )
		printf("adding not possible,queue is full\n");
	else
	{
		if(rear==max-1)
		{
			front=-1;
			rear=-1;
		}
		queue[++rear]=data;
	}
}

//deque function
void deque()
{
	if(rear==-1)
	{
		printf("queue is empty\n");
		rear=-1;
		front=-1;
	}
	else
	{
		printf("%d is poped out\n",queue[front]);
		//queue[front]=0;
		//front++;
		rear=front-1;
		front++;
	}
}

//display funcition
void display()
{
	if(front==-1 && rear==-1)
		printf("nothing to show, queue is empty\n");
	for(int i=0;queue[i];i++)
		printf("%d ",queue[i]);
}
