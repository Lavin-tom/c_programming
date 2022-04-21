//add last and save 

#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int roll;
	char name[20];
	float marks;
	struct student *link; 	//self referential pointer
};
struct student *add_last(struct student *);
void display(struct student*);
void save (struct student*);

int main()
{
	struct student *head=NULL;
	int choice;
	while(1)		//super loop
	{
		printf("enter any option\n");
		printf("1.Add last 2.Display 3.Save 4.Exit\n");
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
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the rollno\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter marks\n");
		scanf("%f",&newnode->marks);

		if(ptr==NULL)
		{
			ptr=newnode;
		}
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
void save(struct student *ptr)
{
	FILE *fp;
	long long int size;
	size=sizeof(struct student)-sizeof(struct student *);

	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		fp=fopen("student.text","w");
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
			fclose(fp);
		}
	}
}
