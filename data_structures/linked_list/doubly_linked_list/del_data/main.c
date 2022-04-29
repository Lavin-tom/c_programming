//main.c

#include"myheader.h"
int main()
{
	struct student *head=NULL;
	int choice;
	while(1)
	{
	printf("choose any option\n");
	printf("1.Add Last 2.Del data 3.Display 4.Exit\n");
	scanf("%d",&choice);
	if(choice==4)
		exit(0);
	switch (choice)
	{
		case 1: head=add_last(head);
			break;
		case 2: head=del_data(head);
			break;
		case 3: display(head);
			break;
	}
	}
}
