//main.c

#include"myheader.h"
int main()
{
	int choice;
	struct student *head=NULL;
	while(1)
	{
	printf("choose any option\n");
	printf("1.Add_first 2.Display 3.Exit\n");
	scanf("%d",&choice);

	if(choice==3)
		exit(0);
	switch(choice)
	{
		case 1: head=add_first(head);
			break;
		case 2: display(head);
			break;
	}
	}
}

