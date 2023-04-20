#include<stdio.h>
#include"header.h"
extern int rear;
extern int front;
void addQueue(int queue[])
{
    printf("\n________________________________\n");
    int data;
    //index start from 0 so maximum possible insertion is max-1
	if(rear==size-1)
	printf("queue is full\n");
	else
	{
		//first value added to the index 0
		if(rear==-1)
			front=0;
        printf("enter data to add\n");
        scanf("%d",&data);
		//new data assigned to new index value
		queue[++rear]=data;
	}
}