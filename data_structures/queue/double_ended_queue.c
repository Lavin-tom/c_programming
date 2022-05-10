//double ended queue
//enq at front
//enq at rear
//deq at front
//deq at rear
//using doubly linked list

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *link;
	struct queue *prev;
};

struct queue *deq_front(struct queue*);
struct queue *deq_rear(struct queue*);
struct queue *enq_front(struct queue*);
struct queue *enq_rear(struct queue*);
void display(struct queue*);

int main()
{
	int choice;
	struct queue *head=NULL;
	while(1)
	{
	printf("\nchoose any option\n");
	printf("1.Enque front 2.Enque rear 3.Deque front 4.Deque rear 5.Display 6.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: head=enq_front(head);
			break;
		case 2: head=enq_rear(head);
			break;
		case 3: head=deq_front(head);
			break;
		case 4: head=deq_rear(head);
			break;
		case 5: display(head);
			break;
		case 6: exit(0);
	}
	}
}
//enque_front
struct queue *enq_front(struct queue *ptr)
{
        struct queue *newnode=NULL,*temp=NULL;
        newnode=(struct queue*)calloc(1,sizeof(struct queue));
        if(newnode==NULL)
                printf("Node not created\n");
        else
        {
                        printf("enter the data\n");
                        scanf("%d",&newnode->data);
                       
                       	newnode->link=ptr;
			if(ptr)
			ptr->prev=newnode;
                       	ptr=newnode;
        }
        return ptr;
}
//enque_rear
struct queue *enq_rear(struct queue *ptr)
{
	struct queue *newnode=NULL,*temp=NULL;
	newnode=(struct queue*)calloc(1,sizeof(struct queue));
	if(newnode==NULL)
		printf("Node not created\n");
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
			//forward linking
			temp->link=newnode;
			//backward linking
			newnode->prev=temp;
			}
	}
	return ptr;
}
//deque_front
struct queue *deq_front(struct queue *ptr)
{
    struct queue *temp=NULL;
                       if(ptr==NULL)
                                printf("Nothing to Delete,queue is empty\n");
                       //only one node available
                       else if(ptr->link==NULL)
                       {
                              free(ptr);
                              ptr=NULL;
                       }
                       else
                        {
                                temp=ptr;
                                printf("%d is deleted from the queue\n",temp->data);
                                //make second node as first node
				ptr=ptr->link;
				if(ptr)
					ptr->prev=NULL;
                                free(temp);
                                temp=NULL;
                        }
                        return ptr;
}
//deque rear
struct queue *deq_rear(struct queue *ptr)
{
    struct queue *temp=NULL;
                       if(ptr==NULL)
                                printf("Nothing to Delete,queue is empty\n");
		       //only one node available
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
				printf("%d is deleted from the queue\n",temp->data);
                       	 	temp->prev->link=NULL;
				free(temp);
				temp=NULL;
                        }
			return ptr;
}

//display for debug
void display(struct queue*ptr)
{
	if(ptr==NULL)
		printf("Nothing to show,queue is empty\n");
	else
	{
		while(ptr)
		{
		printf("%d ",ptr->data);
		ptr=ptr->link;
		}
	}
}
