//wap to print binary nos in series
//clearing nos after printing

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num;
	printf("enter end value\n");
	scanf("%d",&num);

	for(int i=0;i<=num;i++)
	{
		system("clear");
		for(int j=7;j>=0;j--)
		{
			printf("%d",i>>j&1);
		}
		printf("\n");
		sleep(1);
	}
}
