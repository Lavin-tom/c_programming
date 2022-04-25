//main file

#include"myheader.h"
int main()
{
	int num,choice,result;

	while(1)
	{
	printf("choose any option\n");
	printf("1.no is even or not 2.revese the no 3.exit\n");
	scanf("%d",&choice);

	if(choice==3)
		exit(0);

	printf("enter the no\n");
	scanf("%d",&num);

	switch(choice)
	{
		case 1: result=iseven(num);
			if(result)
				printf("no is even\n");
			else
				printf("no is odd\n");
			break;
		case 2: result=reverse(num);
			printf("revese of no :%d\n",result);
			break;
	}
	}
}
