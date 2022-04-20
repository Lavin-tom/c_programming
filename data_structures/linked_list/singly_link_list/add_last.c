//singly linked list 
//Add at last

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *link;		//self referential pointer
};
struct student *add_last(struct student*);
void display(struct student*);
struct student *del_first(struct student*);
void save(struct student*);
int main()
{
	struct student *head=NULL;
	int choice;
	while(1)
	{
		printf("enter your choice\n");
		printf("1. AddLast 2.Display 3.Del_first 4.Save 5.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=add_last(head);
				break;
			case 2: display(head);
				break;
			case 3: head=del_first(head);
				break;
			case 4: save(head);
				break;
			case 5: exit(0);
		}
	}
}

struct student * add_last(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;

	//1.creating the node
	newnode=(struct student *)calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("Not not created\n");
	}
	else
	{
		//node created sucessfully
		//2.Initialise the node
		printf("enter the rollno\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);

		//newnode->link=NULL 		//requires if memory allocated with malloc 
		
		//3. link to list
		//if list is empty add newnode as first node
		if(ptr==NULL)
		{
			ptr=newnode;		//added as first node
		}
		else				//list is already existing
		{
			//traverse upto last node
			temp=ptr;
			while(temp->link!=NULL)		//if temp is not enter the loop
			{
				temp=temp->link;	//moving to next node;
			}

			//temp is at last node
			temp->link=newnode;		//linking new node to last node
		}
		return ptr;
	}
}

//display the details of student
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

//delete first data 
struct student *del_first(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=ptr;
		ptr=ptr->link;		//moving to next node
		free(temp);
		temp=NULL;		//to avoid dangling pointer issue, even after the free pointer point to same address
	}
	return ptr;
}

//to save student details using file concept
//fwrite is used to copy the content 
//fwrite store the data as binary format
void save(struct student *ptr)
{
	FILE *fp;
	long long int size;
	size=sizeof(struct student)-sizeof(struct student*);

	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		fp=fopen("student.txt","w");
		if(fp==NULL)
		{
			printf("file not opened\n");
		}
		else
		{
			while(ptr)
			{
				fwrite(ptr,size,1,fp);
				ptr=ptr->link;
			}
		}
		fclose(fp);
	}
}
