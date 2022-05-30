//circular linked list
//add_first
//delete_full node
//delete node based on data
//not completed

#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int roll;
    char name[20];
    struct student *link,*prev;
};
struct student *add_first(struct student*);
struct student *dlte_all(struct student *);
void display(struct student *);
int main()
{
    int choice;
    struct student *head=NULL;
    while(1)
    {
    printf("choose any optoin\n");
    printf("1.Add first 2.Dlte Data 3.Dlte all 4.Display 5.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: head=add_first(head);
                break;
        //case 2: head=dlte_data(head);
        //        break;
        case 3: head=dlte_all(head);
                break;
        case 4: display(head);
                break;
        case 5: exit(0);
    }
    }
}

struct student *add_first(struct student *ptr)
{
    struct student *newnode=NULL,*temp=NULL;
    newnode=(struct student*)calloc(1,sizeof(struct student));
    if(newnode==NULL)
        printf("node not created\n");
    else
    {
        printf("enter roll\n");
        scanf("%d",&newnode->roll);
        printf("enter name\n");
        scanf("%s",newnode->name);
        
        if(ptr==NULL)
	{
            ptr=newnode;
	    ptr->link=ptr;
	}
        else
        {
            temp=ptr;
	    temp=temp->link;
            while(temp!=ptr)
	    {
		    temp=temp->link;
	    }
            newnode->link=ptr;
            //ptr->prev=newnode;
	    newnode->prev=temp->link;
            ptr=newnode;
            //temp->link=ptr;
        }
    }
    return ptr;
}
    
void display (struct student *ptr)
{
    struct student *temp=NULL;
    if(ptr==NULL)
        printf("list is empty");
    else
    {
        temp=ptr;
        do
        {
            printf("%d %s\n",ptr->roll,ptr->name);
            temp=temp->link;
        }while(temp!=ptr);
    }
}

struct student *dlte_all(struct student *ptr)
{
    if(ptr==NULL)
        printf("list is already empty");
    else
        {
            while(ptr)
            {
                free(ptr);
                ptr=NULL;
            }
        }
    return ptr;
}
/*
struct student *dlte_data(struct student *ptr)
{
    int data;
    struct student *temp=NULL;
    if(ptr==NULL)
        printf("list is empty\n");
    else
        {
        printf("enter the data to delete\n");
        scanf("%d",&data);
        
        
        while(temp->link!=NULL)
        {
         if(temp->roll==data)
         {
             //logic for dlte
             next=temp->link;
             preve=temp->prev;
             free(temp);
             temp=NULL;
         }
         temp=temp->link;
        }
        }
}*/
