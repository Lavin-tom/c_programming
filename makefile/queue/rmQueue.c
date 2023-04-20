#include<stdio.h>
extern int rear;
extern int front;
void rmQueue(int queue[])
{
    printf("________________________________\n");
	int i;
	if(rear==-1)
	{
		printf("queue is empty\n");
		front=0;
	}
	else
	{
		printf("%d is dequed\n",queue[front]);
		//after deleting the data from the begining 
		//rest of elements shifted to the left. in order to use the vaccant space of array
		for(i=0;i<=rear;i++)
			{
				//left shifting
				queue[i]=queue[i+1];
			}
		//last data index decremented
		rear--;
		queue[i]='\0';
	}
}