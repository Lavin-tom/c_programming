//set clear and compliment using macros

#include<stdio.h>
#define set(n,bp) n=n|(1<<bp)
#define clear(n,bp) n=n&~(1<<bp)
#define comp(n,bp) n=n^(1<<bp)
int main()
{
	int n,bp,option;
	printf("enter ther no and bitposition\n");
	scanf("%d %d",&n,&bp);
	
	printf("select any option\n");
	printf("1. set the bit\n");
	printf("2. clear the bit\n");
	printf("3. compliment the bit\n");
	scanf("%d",&option);

	switch(option)
	{
	case 1: set(n,bp);
		printf("final ans : %d\n",n);
	        break;
	case 2: clear(n,bp);
		printf("final ans : %d\n",n);
		break;
	case 3: comp(n,bp);
		printf("final ans : %d\n",n);
		break;
	default : 
		printf("please enter valid option\n");
	}
}
