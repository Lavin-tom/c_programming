//main file
//menu 

#include"myheader.h"
int main()
{
	int choice;
	struct Student *head=NULL;
	while(1)	//super loop
	{
		printf("enter the choice\n");
		printf("1.Add sorted 2.Display 3.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Add_sorted(head);
				break;
			case 2: Display(head);
				break;
			case 3: exit(0);
		}
	}
}
