//testing random no generator using srand function

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int start,end,count,n;
	printf("Enter the range,start and end\n");
	scanf("%d %d",&start,&end);

	printf("How many random no,do you need\n");
	scanf("%d",&count);

	//if same input is provided multiple times, generated output no is same
	//to avoid this add srand, for this we add unistd.h 
	srand(getpid());
	for(int i=1;i<=count;i++)
	{
		//predefined function for random no generation
		n=rand()%end+1;
		printf("%d Random no generated: %d\n",i,n);
	}
}
