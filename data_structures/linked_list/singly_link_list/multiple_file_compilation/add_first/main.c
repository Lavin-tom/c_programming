//main.c

#include"myheader.h"
int main()
{
	int option;
	struct student *head=NULL;
	while(1)
	{
	printf("\nchoose any option\n");
	printf("1.add_first 2.display 3.exit\n");
	scanf("%d",&option);

	switch(option)
	{
		case 1:	head=add_first(head);
			break;
		case 2: display(head);
       			break;		       
		case 3: exit(0);
	}
	}
}
