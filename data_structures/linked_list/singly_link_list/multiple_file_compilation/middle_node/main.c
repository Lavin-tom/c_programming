//main.c

#include"myheader.h"
int main()
{
	int choice;
	struct student *head=NULL;
	while(1)
	{
	printf("choose any option\n");
	printf("1.Add_list 2.Display 3.Display_middle_node 4.Exit\n");
	scanf("%d",&choice);

	if(choice==4)
		exit(0);
	switch(choice)
	{
		case 1: head=add_last(head);
			break;
		case 2: display(head);
			break;
		case 3: head=middle(head);
			break;
	}
	}
}
