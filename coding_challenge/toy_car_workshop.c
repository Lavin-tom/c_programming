//toy car workshop
//You work in a toy car workshop, and your job is to build toy cars from a collection of parts.
// Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. 
// Given the total number of wheels, car bodies and figures available, how many complete toy cars can you make?

#include<stdio.h>
int main()
{
	int wheels,body,figures;
	int i,large;
	printf("enter available count of wheels body and figures\n");
	scanf("%d %d %d",&wheels,&body,&figures);

	wheels=wheels/4;
	figures=figures/2;

	//to find which material is available more
	if(wheels>figures && wheels>body)
		large=wheels;

	else if (figures>wheels && figures>body)
		large=figures;
	else
		large=body;

	for(i=0;i<large;i++){
		if(wheels<=i || figures<=i || body<=i)
		       break;	
	}
	printf("total %d toys cars are made by available materials\n",i);
}

