//main.c

#include"myheader.h"
int main()
{
	int option;
	struct stack *top=NULL;
	while(1)
	{
	printf("choose any option\n");
	printf("1.push 2.pop 3.peek 4.exit\n");
	scanf("%d",&option);

	switch(option)
	{
		case 1:	top=push(top);
			break;
	//	case 2: top=pop(top);
	//		break;
	//	case 3: top=peek(top);
	//		break;
		case 5: display(top);
       			break;		       
		case 4: exit(0);
	}
	}
}
