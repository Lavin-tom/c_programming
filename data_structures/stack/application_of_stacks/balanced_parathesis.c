//balanced paranthesis or not
//using stack 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{	
	char data;
	struct stack *link;
};
struct stack *push (char,struct stack *);
struct stack *pop(char, struct stack *);
void display(struct stack*);
void check(struct stack*);
int main()
{
	int l;
	char data[20];
	printf("enter the string\n");
	scanf("%s",data);
	
	struct stack *head=NULL;
	l=strlen(data);
	for(int i=0;i<=l-1;i++)
	{
		if(data[i]== '{' || data[i]=='[' || data[i]== '(')
		{
			head=push(data[i],head);
		}
		if(data[i]=='}' || data[i]==']' || data[i]==')')
		{
			head=pop(data[i],head);
		}		

	}
	display(head);
	check(head);
}

//push function
struct stack *push (char d,struct stack *ptr)
{
	struct stack *newnode=NULL,*temp=NULL;
	newnode=(struct stack*)calloc(1,sizeof(struct stack));
	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		newnode->data=d;
		if(ptr==NULL)
			ptr=newnode;
		else
		{
			temp=ptr;
			newnode->link=ptr;
			ptr=newnode;
		}
	}
	return ptr;
}
//pop
struct stack *pop(char d,struct stack *ptr)
{
	struct stack *temp=NULL;
	if(ptr==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		temp=ptr;
		if((temp->data=='{' && d=='}')|| (temp->data=='(' && d==')')||(temp->data=='[' && d==']'))
		{
			ptr=temp->link;
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}

//display - debug
void display(struct stack *ptr)
{
	struct stack *temp=NULL;
	if(ptr==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		temp=ptr;
	while(temp)
	{
		printf("%c\n",temp->data);
		temp=temp->link;
	}
	}
}
//check for balanced paranthesis
void check(struct stack *ptr)
{
	if(ptr==NULL)
		printf("balanced paranthesis\n");
	else
		printf("not balanced paranthesis\n");
}
