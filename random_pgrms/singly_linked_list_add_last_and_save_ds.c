//data structure
//add last and save
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	struct student *link;	//self referential pointer
};

struct student *add_last(struct student *);
void display(struct student *);
void save(struct student *);

int main()
{
	struct student *head=NULL;
	int choice;
	while(1)
	{
		printf("enter any option\n");
		printf("1.Add 2.Display 3.Save 4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=add_last(head);
				break;
			case 2: display(head);
				break;
			case 3: save(head);
				break;
			case 4: exit(0);
		}
	}
}

struct student *add_last(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=(struct student *)calloc(1,sizeof(struct student));
	if(newnode==NULL)
		printf("Node not created\n");
	else
	{
		printf("enter roll\n");
		scanf("%d",&newnode->roll);
		printf("enter name\n");
		scanf("%s",newnode->name);

		if(ptr==NULL)
			ptr=newnode;
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
	}
	return ptr;
}

//to display content
void display(struct student *ptr)
{
	if(ptr==NULL)
		printf("List is empty\n");
	else
	{
		while(ptr!=NULL)
		{
			printf("%d %s\n",ptr->roll,ptr->name);
			ptr=ptr->link;
		}
	}
}

//to save data into student.txt file
void save(struct student *ptr)
{
	FILE *fp;
	long long int size;
	size=sizeof(struct student)-sizeof(struct student *);

	if(ptr==NULL)
		printf("List is empty\n");
	else
	{
		fp=fopen("student.txt","w");
		if(fp==NULL)
			printf("file not opened\n");
		else
		{
			while(ptr)
			{
				fwrite(ptr,size,1,fp);
				ptr=ptr->link;
			}
			fclose(fp);
		}
	}
}
