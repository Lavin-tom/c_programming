//main.c

#include"myheader.h"
int main()
{
	int choice,max=5,count=0;
	struct student *head=NULL;
	while(1)
	{
	printf("choose any option\n");
	printf("1.push 2.pop 3.peek 4.exit\n");
	scanf("%d",&choice);
	if(choice==4)
		exit(0);
	else
	{
	if(count<=max-1)
	{	
		switch(choice)
		{
			case 1: head=push(head);
				count++;
				break;
			//case 2: head=pop(head);
			//	break;
			//case 3:head=peek(head);
			//       break;
		}
	}
	else
	{
		printf("stack is full\n");
	}
	}
	}
}
