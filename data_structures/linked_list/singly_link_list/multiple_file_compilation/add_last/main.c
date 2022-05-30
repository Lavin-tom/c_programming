//main.c
#include"myheader.h"
int main()
{
	int choice;
	struct student *head=NULL;
	while(1)
	{
	printf("enter any choice\n");
	printf("1.Add last 2.Display 3.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: head=add_last(head);
			break;
		case 2: display(head);
			break;
		case 3: exit(0);
	}
	}	
}
