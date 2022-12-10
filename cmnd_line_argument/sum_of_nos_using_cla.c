//sum of integers using command line arguments
//we need atoi function to convert string into integer
#include<stdio.h>
int main(int argc,char *argv[])
{
	int sum=0;
	for(int i=0;argv[1][i];i++)
		sum=sum+(argv[1][i]);
	printf("argc: %d\n",argc);
	printf("sum : %d\n",sum);
}
