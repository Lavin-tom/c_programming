//wap to display the nth nodes in the singly linked list
//multiple file compilation
//main.c

#include "myheader.h"

int main()
{
	int option;
	struct student *head=NULL;
	while(1)
	{
	printf("\nenter any option\n");
	printf("1.Add_list 2.Display 3.Display Node reverse 4.Exit\n");
	scanf("%d",&option);

	if(option==4)
		exit(0);
	switch(option)
	{
		case 1: head=add_list(head);
			break;
		case 2: display(head);
			break;
		case 3: print_node_reverse(head);
	}
	}
}
