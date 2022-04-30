//basics of stack
//push
//pop
//peek

#include<stdio.h>
#include<stdlib.h>
void push(int *,int);
void pop(int *);
void peek(int *);
int max=5;
int top=-1;
int main()
{
	int choice,data,stack[max];
	while(1)
	{
	printf("choose any option\n");
	printf("1.push 2.pop 3.peek 4.exit\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: if(top==max-1)
			{
				printf("stack is full\n");
			}
			else
			{
				printf("enter the data to be add\n");
				scanf("%d",&data);
				push(stack,data);
				printf("%d added to the stack\n",data);
			}
			break;
		 case 2: if(top==-1)
			 {
				 printf("stack is empty\n");
			 }
			 else
			 {
				pop(stack);
			 }
			break;
		case 3: if(top==-1)
			{
				printf("stack is empty\n");
			}
			else
			{
				peek(stack);
			}
			break;
		case 4: exit(0);
	}
	}
}

void push(int *stack,int data)
{
	stack[++top]=data;
}
void pop(int *stack)
{
	printf("%d is poped out\n",stack[top]);
	stack[top]=0;
	--top;
}
void peek(int *stack)
{
	printf("%d is at the top\n",stack[top]);
}
