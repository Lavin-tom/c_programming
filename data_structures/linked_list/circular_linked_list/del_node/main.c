//main.c
#include"myheader.h"
int main()
{
	int choice;
	struct student *head=NULL;
	while(1)
	{
		printf("choose any option\n");
		printf("1.Add first 2.Display 3.Delete data 4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=add_first(head);
				break;
			case 2: display(head);
				break;
			case 3: dlte_data(head);
				break;
			case 4: exit(0);
		}
	}
}
