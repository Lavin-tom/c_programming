//load time input
//commad line argument

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sum=0,first=0,second=0;
	printf("%s\n",argv[0]);
	if(argc==1)
		printf("load time input, two opeand needed\n");
	else
	{
		if(argc>=2)
		first=atoi(argv[1]); //ascii to int
		if(argc==3)
		second=atoi(argv[2]); //ascii to int
		sum=first+second;
		printf("sum of %d + %d = %d \n",first,second,sum);
	}
}
