//queue
//first in first out 

#include<stdio.h>
#include<stdlib.h>
#define max 5
int rear=-1;
int front=-1;
int stack[max];
void enque(int);
void deque(void);
void display(void);

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
		case 1: printf("enter the data\n");
			scanf("%d",&data);
			enque(data);
			break;
		case 2: deque();
			break;
		case 3: display();
			break;
		case 4: exit(0);
	}
	}
}

//function for enque
//adding elements to the queue
void enque(int data)
{
	//index start from 0 so maximum possible insertion is max-1
	if(rear==max-1)
	printf("queue is full\n");
	else
	{
		//first value added to the index 0
		if(rear==-1)
			front=0;
		//new data assigned to new index value
		stack[++rear]=data;
	}
}

//function for deque
//deleting elements form the front
void deque()
{
	int i;
	if(rear==-1)
	{
		printf("queue is empty\n");
		front=0;
	}
	else
	{
		printf("%d is dequed\n",stack[front]);
		//after deleting the data from the begining 
		//rest of elements shifted to the left. in order to use the vaccant space of array
		for(i=0;i<=rear;i++)
			{
				//left shifting
				stack[i]=stack[i+1];
			}
		//last data index decremented
		rear--;
		stack[i]='\0';
	}

}

//for display the queue for debuging
void display()
{
	if(rear==-1)
		printf("Nothing to show...queue is empty\n");
	else
	{
		for(int i=0;i<=rear;i++)
			printf("%d ",stack[i]);
	}
}
